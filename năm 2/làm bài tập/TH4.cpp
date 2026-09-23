#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void NhapMang(int a[], int N) {
    srand(time(0));
    for (int i = 0; i < N; i++)
        a[i] = rand() % 50;
}
void XuatMang(int a[], int N) {
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
void HoanVi(int& a, int& b)
{
    // Hoán vị hai số nguyên
    int tam = a;
    a = b;
    b = tam;
}
void DemSoNT(int a[], int N) {
    int dem = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N;j++) {
            if (a[i] > a[j]) {
                dem++;
            }
        }
    }
    cout << "so nghich the la: " << dem << endl;
}
void DoiChoTT(int a[], int N, int& dem1, int& dem2) {
    int demHoanVi = 0;
    DemSoNT(a, N);
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            dem2++;
            if (a[i] > a[j]) {
                dem1 += 3;
                HoanVi(a[i], a[j]);
                demHoanVi++;
                cout << "Lan hoan vi thu " << demHoanVi << ": ";
                XuatMang(a, N);
            }
        }
    }
    cout << "Mang da sap xep la: ";
    XuatMang(a, N);
}
void SapXepGD(int a[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (a[i] < a[j]) {
                HoanVi(a[i], a[j]);
            }
        }
    }
    cout << "Mang da sap xep la: ";
    XuatMang(a, N);
}
int main() {
    int a[100];
    int N;
    cout<<"Nhap vao so phan tu can dung: ";
    cin >> N;
    NhapMang(a, N);
    cout << "Mang da nhap ngau nhien la: ";
    XuatMang(a, N);
    int dem1 = 0, dem2 = 0;
    DoiChoTT(a, N, dem1, dem2);
    cout << "so lan gan: " << dem1 << endl;
    cout << "so lan so sanh " << dem2;
}