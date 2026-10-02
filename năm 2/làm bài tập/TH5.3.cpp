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
void HoanVi(int& a, int& b) {
    // Hoán vị hai số nguyên
    int tam = a;
    a = b;
    b = tam;
}
void ChonTT(int a[], int N, int &dem1, int &dem2) {
    int demHoanVi = 0;
    for (int i = 0; i < N -1; i++) {
        int min = i;
        for (int j = i + 1; j < N; j++) {
            dem2++;
            if (a[min] > a[j])
            min = j;
            dem1++;
        }
        dem2++;
        if (min != i)
        HoanVi(a[min], a[i]);
        dem1+=3;
        demHoanVi++;
        cout << "Lan hoan vi thu " << demHoanVi << ": ";
        XuatMang(a, N);
    }
    cout<<"Mang da chon truc tiep: ";
    XuatMang(a, N);
}
void ChonTTGD(int a[], int N) {
    for (int i = 0; i < N -1; i++) {
        int min = i;
        for (int j = i + 1; j < N; j++) {
            if (a[min] < a[j])
            min = j;
        }
        if (min != i)
        HoanVi(a[min], a[i]);
    }
    cout<<"Mang da chon truc tiep: ";
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
    ChonTT(a, N, dem1, dem2);
    cout << "so lan gan: " << dem1 << endl;
    cout << "so lan so sanh " << dem2;
}