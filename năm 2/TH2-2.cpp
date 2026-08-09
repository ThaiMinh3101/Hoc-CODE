#include <iostream>
using namespace std;

void nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}

void xuatmang(int a[], int n) {
    cout << "Mang da nhap la: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Tinh tong cac phan tu o vi tri chan (chi so 0, 2, 4, ...)
// Dem so phep gan (d1) va so phep so sanh (d2)
int TongViTriChan(int a[], int n, int &d1, int &d2) {
    int tong = 0; d1++; // Phep gan khoi tao tong = 0

    d1++; // Phep gan khoi tao i = 0 trong vong lap for
    for (int i = 0; i < n; i += 2) {
        d2++; // Dem phep so sanh dieu kien i < n (khi dung)

        tong += a[i]; d1++; // Phep gan tong = tong + a[i]

        d1++; // Phep gan i += 2 sau moi vong lap
    }
    d2++; // Dem 1 lan phep so sanh i < n cuoi cung (khi sai de thoat lap)

    return tong;
}

int main() {
    int a[100];
    int n;
    cout << "Nhap so phan tu trong mang n: ";
    cin >> n;

    nhapmang(a, n);
    xuatmang(a, n);

    int d1 = 0, d2 = 0;
    int kq = TongViTriChan(a, n, d1, d2);

    cout << "\nTong cac phan tu o vi tri chan la: " << kq;
    cout << "\nSo phep gan da thuc hien (d1): " << d1;
    cout << "\nSo phep so sanh da thuc hien (d2): " << d2;
    return 0;
}