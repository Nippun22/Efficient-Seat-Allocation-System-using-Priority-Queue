#include <bits/stdc++.h>
using namespace std;

struct Student {
    int id;
    string name;
    int marks;
    vector<int> preferences;
};

// Comparator for sorting students by marks (descending)
bool compare(Student a, Student b) {
    return a.marks > b.marks;
}

int main() {
    // Sample Students
    vector<Student> students = {
        {1, "Aman", 95, {1,2,3}},
        {2, "Rahul", 90, {2,1,3}},
        {3, "Neha", 85, {1,3,2}},
        {4, "Simran", 80, {3,2,1}}
    };

    // Seat availability (course_id -> seats)
    unordered_map<int, int> seats = {
        {1, 2}, // CSE
        {2, 1}, // ECE
        {3, 1}  // ME
    };

    // Course mapping
    unordered_map<int, string> courseName = {
        {1, "CSE"},
        {2, "ECE"},
        {3, "ME"}
    };

    // Sort students by marks
    sort(students.begin(), students.end(), compare);

    cout << "Seat Allocation Result:\n\n";

    for (auto &student : students) {
        bool allocated = false;

        for (int pref : student.preferences) {
            if (seats[pref] > 0) {
                cout << student.name << " -> " << courseName[pref] << endl;
                seats[pref]--;
                allocated = true;
                break;
            }
        }

        if (!allocated) {
            cout << student.name << " -> Not Allocated" << endl;
        }
    }

    return 0;
}
