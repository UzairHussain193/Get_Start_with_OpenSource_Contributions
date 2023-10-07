#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to calculate the average of a vector of grades
double calculateAverage(const vector<int>& grades) {
    int total = 0;
    for (int grade : grades) {
        total += grade;
    }
    return static_cast<double>(total) / grades.size();
}

// Function to find the highest grade in a vector of grades
int findHighest(const vector<int>& grades) {
    int highest = grades[0];
    for (int grade : grades) {
        if (grade > highest) {
            highest = grade;
        }
    }
    return highest;
}

// Function to find the lowest grade in a vector of grades
int findLowest(const vector<int>& grades) {
    int lowest = grades[0];
    for (int grade : grades) {
        if (grade < lowest) {
            lowest = grade;
        }
    }
    return lowest;
}

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    vector<string> studentNames(numStudents);
    vector<int> studentGrades(numStudents);

    // Input student names and grades
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> studentNames[i];

        cout << "Enter the grade for student " << i + 1 << ": ";
        cin >> studentGrades[i];
    }

    // Calculate and display average, highest, and lowest grades
    double average = calculateAverage(studentGrades);
    int highest = findHighest(studentGrades);
    int lowest = findLowest(studentGrades);

    cout << "\nClass Statistics:" << endl;
    cout << "Average Grade: " << average << endl;
    cout << "Highest Grade: " << highest << endl;
    cout << "Lowest Grade: " << lowest << endl;

    // Display grades for each student
    cout << "\nStudent Grades:" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << studentNames[i] << ": " << studentGrades[i] << endl;
    }

    return 0;
}
