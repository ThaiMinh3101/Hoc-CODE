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
int main () {
    int a[10];
    int N;
    do{
        cout << "Nhap so N (0 < N <= 10): ";
        cin >> N;
    } while (N <= 0 || N > 10);
    nhapmang(a, N);
    xuatmang(a, N);
}