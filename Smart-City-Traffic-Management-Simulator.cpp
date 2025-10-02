#include <bits/stdc++.h>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <chrono>

using namespace std;

// ---------------- Vehicle ----------------
enum VehicleType { CAR, BUS, EMERGENCY };

struct Vehicle {
    int id;
    VehicleType type;
    string source;
    string destination;
    int priority; // emergency higher
    Vehicle(int i, VehicleType t, string s, string d)
        : id(i), type(t), source(s), destination(d) {
        priority = (type == EMERGENCY) ? 3 : (type == BUS ? 2 : 1);
    }
};

// Comparator for priority queue
struct VehicleCompare {
    bool operator()(Vehicle* a, Vehicle* b) {
        return a->priority < b->priority; // max-heap, higher priority first
    }
};

// ---------------- Intersection ----------------
class Intersection {
    string name;
    mutex mtx;
    condition_variable cv;
    bool green; // is green for main road
    priority_queue<Vehicle*, vector<Vehicle*>, VehicleCompare> vehicleQueue;

public:
    Intersection(string n) : name(n), green(true) {}

    void addVehicle(Vehicle* v) {
        lock_guard<mutex> lock(mtx);
        vehicleQueue.push(v);
    }

    void manageTraffic() {
        while (true) {
            Vehicle* v = nullptr;
            {
                unique_lock<mutex> lock(mtx);
                if (!vehicleQueue.empty()) {
                    v = vehicleQueue.top();
                    vehicleQueue.pop();
                }
            }

            if (v != nullptr) {
                cout << "Intersection " << name << " letting Vehicle " << v->id
                     << " (" << ((v->type==EMERGENCY)?"EMERGENCY":"CAR/BUS") << ") pass." << endl;
                this_thread::sleep_for(chrono::milliseconds(500)); // simulate time to pass
            } else {
                this_thread::sleep_for(chrono::milliseconds(100)); // wait if no vehicles
            }
        }
    }

    string getName() { return name; }
};

// ---------------- Traffic System ----------------
class TrafficSystem {
    vector<Intersection*> intersections;
    vector<thread> threads;
    int vehicleCounter = 0;
    mutex idMtx;

public:
    TrafficSystem(vector<string> names) {
        for (auto& n : names) {
            intersections.push_back(new Intersection(n));
        }
    }

    ~TrafficSystem() {
        for (auto t : threads) if(t.joinable()) t.join();
        for (auto i : intersections) delete i;
    }

    void startSimulation() {
        for (auto& inter : intersections) {
            threads.push_back(thread(&Intersection::manageTraffic, inter));
        }
    }

    void addVehicle(string source, string destination, VehicleType type) {
        lock_guard<mutex> lock(idMtx);
        vehicleCounter++;
        Vehicle* v = new Vehicle(vehicleCounter, type, source, destination);
        // assign to intersection randomly for demo
        int idx = rand() % intersections.size();
        intersections[idx]->addVehicle(v);
        cout << "Added Vehicle " << v->id << " (" << ((type==EMERGENCY)?"EMERGENCY":"CAR/BUS")
             << ") at Intersection " << intersections[idx]->getName() << endl;
    }
};

// ---------------- Main ----------------
int main() {
    srand(time(0));

    vector<string> interNames = {"A", "B", "C", "D"};
    TrafficSystem city(interNames);

    city.startSimulation();

    // Add vehicles randomly
    for (int i = 0; i < 20; i++) {
        VehicleType type = (rand()%10==0) ? EMERGENCY : (rand()%2==0 ? CAR : BUS);
        city.addVehicle("Source", "Destination", type);
        this_thread::sleep_for(chrono::milliseconds(300));
    }

    // Let simulation run for a while
    this_thread::sleep_for(chrono::seconds(10));
    cout << "Simulation finished!" << endl;

    return 0;
}
