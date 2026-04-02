#include <iostream>
using namespace std;
void tongmang(int a[], int N) {
    int tong = 0;
    for (int i = 0; i < N; i++) {
        tong += a[i];
    }
    cout << "Tong cac so trong mang la: " << tong << endl;
}
void phantuduongnhonhat(int a[], int N) {
    int min = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] > 0 && a[i] % 2 == 0) {
            if (min == 0 || a[i] < min)
                min = a[i];
        }
    }
    if (min > 0)
        cout << "Phan tu duong nho nhat trong mang la: " << min << endl;
    else
        cout << "Khong co phan tu duong trong mang." << endl;
}
int main() {
    int a[100];
    int N;
    cout << "nhap N: ";
    cin >> N;
    for (int i = 0; i < N; i++) {
        cout << "nhap mang a[" << i << "]: ";
        cin >> a[i];
    }
    tongmang(a, N);
    phantuduongnhonhat(a, N);
}