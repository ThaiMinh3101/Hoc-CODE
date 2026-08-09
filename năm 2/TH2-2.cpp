#include <iostream>
using namespace std;

/*
    Bai 2: Tinh tong cac phan tu o vi tri chan co trong mang
    (vi tri chan tuc la chi so chan: 0, 2, 4, ... - tinh theo chi so mang bat dau tu 0)
    Dem so phep so sanh va phep gan da thuc hien trong ham.
*/

int tongViTriChan(int a[], int n, long long &soPhepSoSanh, long long &soPhepGan)
{
    int tong = 0;      // phep gan (khoi tao tong)
    soPhepGan++;

    int i = 0;          // phep gan (khoi tao chi so)
    soPhepGan++;

    while (soPhepSoSanh++, i < n) // phep so sanh dieu kien lap
    {
        soPhepSoSanh++;   // phep so sanh kiem tra vi tri chan (i % 2 == 0)
        if (i % 2 == 0)
        {
            tong += a[i]; // phep gan (cong don)
            soPhepGan++;
        }

        i++;              // phep gan
        soPhepGan++;
    }

    return tong;
}

int main()
{
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int *a = new int[n];
    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    long long soPhepSoSanh = 0;
    long long soPhepGan = 0;

    int tong = tongViTriChan(a, n, soPhepSoSanh, soPhepGan);

    cout << "Tong cac phan tu o vi tri chan: " << tong << endl;
    cout << "So phep so sanh da thuc hien: " << soPhepSoSanh << endl;
    cout << "So phep gan da thuc hien: " << soPhepGan << endl;

    delete[] a;
    return 0;
}