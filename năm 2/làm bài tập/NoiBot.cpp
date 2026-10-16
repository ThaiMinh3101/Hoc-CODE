#include<iostream>
#include<cstdlib>
#include<ctime>
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
void HoanVi(int& a, int& b) {
    // Hoán vị hai số nguyên
    int tam = a;
    a = b;
    b = tam;
}
void NoiBot(int a[], int N, int &dem1, int &dem2) {
    int demHoanVi = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = N - 1; j > i; j--) {
        dem2++;
            if (a[j] < a[j-1]) {
                dem1+=3;
                HoanVi(a[j], a[j-1]);
                demHoanVi++;
                cout << "Lan hoan vi thu " << demHoanVi << ": ";
                XuatMang(a, N);
            }
        }
    }
    cout<<"Mang da noi bot: ";
    XuatMang(a, N);
}
int main() {
    int a[100];
    int N;
    cout<<"Nhap vao so phan tu can dung: ";
    cin >> N;
    NhapMang(a, N);
    cout << "Mang da nhap la: ";
    XuatMang(a, N);
    int dem1 = 0, dem2 = 0;
    NoiBot(a, N, dem1, dem2);
    cout << "so lan gan: " << dem1 << endl;
    cout << "so lan so sanh " << dem2;
}