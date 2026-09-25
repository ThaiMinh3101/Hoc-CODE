#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void NhapMang(int a[], int N) {
    for (int i = 0; i < N; i++) {
        cout<<"Nhap a["<<i<<"] = ";
        cin>>a[i];
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
void ChonTrucTiep(int a[], int N) {
    for (int i = 0; i < N -1; i++) {
        int min = i;
        for (int j = i + 1; j < N; j++) {
            if (a[min] > a[j])
            min = j;
        }
        if (min != i)
        HoanVi(a[min], a[i]);
    }
}
int main() {
    int a[100];
    int N;
    cout<<"Nhap vao so phan tu can dung: ";
    cin >> N;
    NhapMang(a, N);
    cout << "Mang da nhap ngau nhien la: ";
    XuatMang(a, N);
    ChonTrucTiep(a, N);
}