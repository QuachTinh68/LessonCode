#include <iostream>
#include <cstring>

using namespace std;

struct Thuebao
{
    char maso[6];
    char hoten[30];
    int sotivi;
};

void nhapDS(Thuebao a[], int &n)
{
    do
    {
        cout << "Nhap so luong thue bao (khong qua 100): ";
        cin >> n;
    } while (n <= 0 || n > 100);

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin thue bao " << i + 1 << ":" << endl;
        cin.ignore(); 
        cout << "Ma so: ";
        cin.getline(a[i].maso, 6);

        bool trungmaso = false;
        for (int j = 0; j < i; j++)
        {
            if (strcmp(a[j].maso, a[i].maso) == 0)
            {
                trungmaso = true;
                break;
            }
        }

        while (trungmaso)
        {
            cout << "Ma so da ton tai, moi nhap lai: ";
            cin.getline(a[i].maso, 6);

            trungmaso = false;
            for (int j = 0; j < i; j++)
            {
                if (strcmp(a[j].maso, a[i].maso) == 0)
                {
                    trungmaso = true;
                    break;
                }
            }
        }

        cout << "Ho ten: ";
        cin.getline(a[i].hoten, 30);
        cout << "So tivi su dung: ";
        cin >> a[i].sotivi;
    }
}

Thuebao* timKiem(Thuebao a[], int n, char matb[])
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(a[i].maso, matb) == 0)
        {
            return &a[i];
        }
    }
    return NULL;
}

void tangSoTivi(Thuebao a[], int n, char matb[], int soluong)
{
    Thuebao* tb = timKiem(a, n, matb);
    if (tb != NULL)
    {
        tb->sotivi += soluong;
    }
    else
    {
        Thuebao newtb;
        strcpy(newtb.maso, matb);
        cout << "Nhap ho ten: ";
        cin.ignore(); // clear buffer
        cin.getline(newtb.hoten, 30);
        newtb.sotivi = soluong;

        a[n] = newtb;
        n++;
    }
}

void inDS(Thuebao a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].sotivi == a[j].sotivi)
            {
                cout << a[i].hoten << " va " << a[j].hoten << " co so tivi su dung bang nhau: " << a[i].sotivi << endl;
            }
        }
    }
}

int main()
{
    Thuebao a[100];
    int n = 0;

    nhapDS(a, n);

    char matb[6];
    cout << "Nhap ma so thu bao can tim kiem: ";
    cin >> matb;
    Thuebao* tb = timKiem(a, n, matb);
    if (tb != NULL)
    {
        cout << "Thong tin thu bao can tim: " << endl;
        cout << "Ma so: " << tb->maso << endl;
        cout << "Ho ten: " << tb->hoten << endl;
        cout << "So tivi su dung: " << tb->sotivi << endl;
    }
    else
    {
        cout << "Khong tim thay thue bao co ma so " << matb << endl;
    }

    char matb2[6];
    int soluong;
    cout << "Nhap ma so thu bao can tang so tivi: ";
    cin >> matb2;
    cout << "Nhap so luong tivi muon tang: ";
    cin >> soluong;
    tangSoTivi(a, n, matb2, soluong);

    cout << "Danh sach cac thu bao co so tivi su dung bang nhau: " << endl;
    inDS(a, n);

    return 0;
}
