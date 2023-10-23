#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct Student {
    string name;
    float score1;
    float score2;
    float score3;
    float avgScore;
};

void inputStudent(Student& student) {
    cout << "Nhap ten hoc sinh: ";
    getline(cin, student.name);
    cout << "Nhap diem mon 1: ";
    cin >> student.score1;
    cout << "Nhap diem mon 2: ";
    cin >> student.score2;
    cout << "Nhap diem mon 3: ";
    cin >> student.score3;
    student.avgScore = (student.score1 + student.score2 + student.score3) / 3;
    cin.ignore();
}


void sortStudents(Student* students, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].avgScore < students[j + 1].avgScore) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void printStudents(Student* students, int n) {
    for (int i = 0; i < n; i++) {
        cout << students[i].name << " - " << students[i].avgScore << endl;
    }
}


void printRankedStudents(Student* students, int n) {
    sortStudents(students, n);
    int rank = 1; 
    cout << "Danh sach hoc sinh theo vi tri diem trung binh:" << endl;
    for (int i = 0; i < n; i++) {
        cout << students[i].name << " - " << students[i].avgScore << " - Vi tri: " << rank << endl;
        if (i < n - 1 && students[i].avgScore > students[i + 1].avgScore) {
            rank++; 
        }
    }
}

int main() {
int n;
cout << "Nhap so luong hoc sinh: ";
cin >> n;
cin.ignore();
Student students[100];

for (int i = 0; i < n; i++) {
    cout << "Nhap thong tin hoc sinh thu " << i + 1 << ":" << endl;
    inputStudent(students[i]);
}


cout << "Danh sach hoc sinh theo thu tu giam dan cua diem trung binh:" << endl;
printStudents(students, n);


printRankedStudents(students, n);

return 0;
}