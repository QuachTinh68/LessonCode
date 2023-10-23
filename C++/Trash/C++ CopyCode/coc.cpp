
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Ham nhap chuoi
void nhapChuoi(string& s)
{
    cout << "Nhap chuoi: ";
    getline(cin, s);
}

// Ham thong ke so lan ky tu 'a' xuat hien trong chuoi
int demKyTuA(string s)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'A')
            count++;
    }
    return count;
}

// Ham tinh do dai chuoi
int doDaiChuoi(string s)
{
    int length = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

// Ham sao chep chuoi
void saoChepChuoi(string s, string& t)
{
    t = "";
    for (int i = 0; i < s.length(); i++)
    {
        t += s[i];
    }
}

// Ham so sanh hai chuoi
bool soSanhChuoi(string s, string t)
{
    if (s.length() != t.length()) return false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != t[i]) return false;
    }
    return true;
}

// Ham xoa khoang trang du thua trong chuoi
void xoaKhoangTrang(string& s)
{
    string result = "";
    bool spaceFound = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            result += s[i];
            spaceFound = false;
        }
        else if (!spaceFound)
        {
            result += s[i];
            spaceFound = true;
        }
    }
    if (result[result.length() - 1] == ' ')
    {
        result = result.substr(0, result.length() - 1);
    }
    s = result;
}

// Ham chuyen chu thuong thanh chu hoa
void chuyenHoa(string& s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
    }
}

int main()
{
    string s, t;
    nhapChuoi(s);

    cout << "Chuoi vua nhap: " << s << endl;

    int aCount = demKyTuA(s);
    cout << "So lan ky tu 'a' xuat hien trong chuoi: " << aCount << endl;

    int length = doDaiChuoi(s);
    cout << "Do dai chuoi: " << length << endl;

    saoChepChuoi(s, t);
    cout << "Chuoi sao chep: " << t << endl;

    cout << "Nhap chuoi can so sanh: ";
    nhapChuoi(t);

   if (soSanhChuoi(s, t))
{
    cout << "Hai chuoi bang nhau." << endl;
}
else
{
    cout << "Hai chuoi khac nhau." << endl;
}

xoaKhoangTrang(s);
cout << "Chuoi sau khi xoa khoang trang du thua: " << s << endl;

chuyenHoa(s);
cout << "Chuoi sau khi chuyen chu thuong thanh chu hoa: " << s << endl;

return 0;
}