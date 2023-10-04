#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to calculate average marks
float calculateAverage(const vector<int>& marks) {
    int sum = 0;
    for (int mark : marks) {
        sum += mark;
    }
    return static_cast<float>(sum) / marks.size();
}

// Function to find the highest and lowest marks
void findMinMax(const vector<int>& marks, int& min, int& max) {
    min = max = marks[0];
    for (int mark : marks) {
        if (mark < min) {
            min = mark;
        }
        if (mark > max) {
            max = mark;
        }
    }
}

// Function to determine the grade based on marks
char getGrade(int mark) {
    if (mark >= 90) return 'A';
    else if (mark >= 80) return 'B';
    else if (mark >= 70) return 'C';
    else if (mark >= 60) return 'D';
    else return 'F';
}

int main() {
    int numStudents, numSubjects;
    cout << "Enter the number of students: ";
    cin >> numStudents;
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    vector<vector<int>> marks(numStudents, vector<int>(numSubjects));

    // Input marks for each student and subject
    for (int i = 0; i < numStudents; ++i) {
        for (int j = 0; j < numSubjects; ++j) {
            cout << "Enter marks for Student " << i + 1 << " in Subject " << j + 1 << ": ";
            cin >> marks[i][j];
        }
    }

    // Calculate and display average marks
    for (int i = 0; i < numStudents; ++i) {
        float average = calculateAverage(marks[i]);
        cout << "Average marks for Student " << i + 1 << ": " << average <<endl;
    }

    // Find and display highest and lowest marks
    for (int i = 0; i < numSubjects; ++i) {
        vector<int> subjectMarks;
        for (int j = 0; j < numStudents; ++j) {
            subjectMarks.push_back(marks[j][i]);
        }
        int min, max;
        findMinMax(subjectMarks, min, max);
        cout << "Subject " << i + 1 << ": Min = " << min << ", Max = " << max <<endl;
    }

    // Display grades for each student
    for (int i = 0; i < numStudents; ++i) {
        cout << "Grades for Student " << i + 1 << ": ";
        for (int j = 0; j < numSubjects; ++j) {
            cout << getGrade(marks[i][j]) << " ";
        }
        cout <<endl;
    }

    return 0;
}