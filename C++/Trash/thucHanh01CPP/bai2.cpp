#include <iostream>
using namespace std;

int main() {
	int num_students; 
	cout << "Nhap so hoc sinh: ";cin >> num_students;
	int num_exams;
	cout << "Nhap so hoc ky: "; cin >>  num_exams;
	int num_parts; 
	cout <<"Nhap so phan thi: "; cin >> num_parts; 
	
    int scores[num_students][num_exams][num_parts];

    // Nhập thông tin điểm của từng học sinh
    for (int i = 0; i < num_students; i++) {
        cout << "Nhap diem cua hoc sinh thu " << i + 1 << endl;
        for (int j = 0; j < num_exams; j++) {
            for (int k = 0; k < num_parts; k++) {
                cout << "Nhap diem cua ky thi " << j + 1 << ", phan " << k + 1 << ": ";
                cin >> scores[i][j][k];
            }
        }
    }

    // Tính tổng điểm của mỗi học sinh và in ra
    for (int i = 0; i < num_students; i++) {
        int sum = 0;
        for (int j = 0; j < num_exams; j++) {
            for (int k = 0; k < num_parts; k++) {
                sum += scores[i][j][k];
            }
        }
        cout << "Tong diem cua hoc sinh thu " << i + 1 << " la: " << sum << endl;
    }

    return 0;
}
