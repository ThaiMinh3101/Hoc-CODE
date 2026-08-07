#include <iostream>
using namespace std;
void nhapmang(int a[], int N) {
    for (int i = 0; i < N; i++) {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}
void xuatmang(int a[], int N) {
    cout << "Mang da nhap la: ";
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
int TimXDauTien(int a[], int N, int X, int &d1) {
    for (int i = 0; i < N; i++) {
        d1++;
        if (a[i] == X) return i;
    }
    return -1;
}
int TimMax(int a[], int N, int &d1, int &d2) {
    int m = a[0];
    d1++;
    for (int i = 0; i < N; i++) {
        d2++;
        if (a[i]>m) {
            m = a[i];
            d1++;
        }
    }
    return m;
}
int main()
{
    int a[100];
    int n;
    cout << "Nhap so phan tu trong mang n: ";
    cin >> n;
    int d1 = 0, d2 = 0;
    nhapmang(a, n);
    xuatmang(a, n);

    int X;
    cout << "\nNhap gia tri X can tim:";
    cin >> X;
    int kq = TimXDauTien(a, n, X,d1);
    if (kq == -1)
    cout << "\nKhong co " << X << " trong mang";
    else
    cout <<"\n"<<X<<" xuat hien dau tien o vi tri "<<kq<<" trong mang";
    cout << "\nSo phep so sanh da thuc hien de tim X dau tien la:" << d1;

    cout << "\nGia tri lon nhat la:" << TimMax(a, n, d1, d2);
    cout << "\nSo phep gan da thuc hien la:" << d1;
    cout << "\nSo phep so sanh da thuc hien la:" << d2;
    return 0;
}