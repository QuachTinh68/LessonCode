#include <iostream>
using namespace std;

int main()
{
    int n;
	cout << "Nhap so hoc sinh: "; cin >> n;
    const int m = 10; 
    char answers[m] = {'D', 'B', 'D', 'C', 'C', 'D', 'A', 'E', 'A', 'D'}; 
    char student_answers[n][m]; 
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap ket qua cua hoc sinh " << i+1 << ":" << endl;
        for (int j = 0; j < m; j++)
        {
            cout << "Cau " << j+1 << ": ";
            cin >> student_answers[i][j];
        }
    }
    int scores[n] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (student_answers[i][j] == answers[j])
            {
                scores[i]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Diem cua hoc sinh " << i+1 << ": " << scores[i] << endl;
    }
    return 0;
}
