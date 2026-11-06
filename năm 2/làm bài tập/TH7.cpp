#include <iostream>
using namespace std;
void NhapMang(int a[], int N) {
    for (int i = 0; i < N; i++) {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}
void XuatMangLR(int a[], int l, int r) {
    for (int i = l; i <= r; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
void XuatMang(int a[], int N) {
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
void HoanVi(int &a, int &b) {
    // Hoán vị hai số nguyên
    int tam = a;
    a = b;
    b = tam;
}
void QuickSort(int a[], int l, int r, int &demHoanVi) {
    int i, j, x;
    i = l, j = r;
    x = a[(l + r) / 2];
    while (i <= j) {
        while (a[i] < x)
            i++;
        while (a[j] > x)
            j--;
        if (i <= j) {
            HoanVi(a[i], a[j]);
            demHoanVi++;
            cout << "Lan hoan vi thu " << demHoanVi << ": ";
            XuatMangLR(a, l, r);
            i++;
            j--;
        }
    }
    if (l < j)
        QuickSort(a, l, j, demHoanVi);
    if (i < r)
        QuickSort(a, i, r, demHoanVi);
}
int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    int a[n];
    NhapMang(a, n);
    XuatMang(a, n);
    int demHoanVi = 0;
    QuickSort(a, 0, n - 1, demHoanVi);
    cout << "Mang sau khi sap xep: ";
    XuatMang(a, n);
    cout << "So lan hoan vi: " << demHoanVi << endl;
    return 0;
}