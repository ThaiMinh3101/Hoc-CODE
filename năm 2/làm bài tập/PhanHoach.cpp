#include <iostream>
using namespace std;
void NhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
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
void QuickSort(int a[], int l, int r) {
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
            i++;
            j--;
        }
    }
    if (l < j)
        QuickSort(a, l, j);
    if (i < r)
        QuickSort(a, i, r);
}