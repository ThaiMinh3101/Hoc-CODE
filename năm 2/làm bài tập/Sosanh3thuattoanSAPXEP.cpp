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
void SaoChepMang(int a[], int b[], int N){
    for (int i = 0; i < N; i++){
        b[i] = a[i];
    }
}

void DoiChoTT(int a[], int N, int& dem1, int& dem2) {
    int b[100];
    SaoChepMang(a, b, N);
    int demHoanVi = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            dem2++;
            if (b[i] > b[j]) {
                dem1 += 3;
                HoanVi(b[i], b[j]);
                demHoanVi++;
                cout << "Lan hoan vi thu " << demHoanVi << ": ";
                XuatMang(b, N);
            }
        }
    }
    cout << "Mang da doi cho truc tiep la: ";
    XuatMang(b, N);
}
void ChonTT(int a[], int N, int &dem1, int &dem2) {
    int b[100];
    SaoChepMang(a, b, N);
    int demHoanVi = 0;
    for (int i = 0; i < N -1; i++) {
        int min = i;
        for (int j = i + 1; j < N; j++) {
            dem2++;
            if (b[min] > b[j]) {
                min = j;
                dem1++;
            }
        }
        HoanVi(b[min], b[i]);
        dem1+=3;
        demHoanVi++;
        cout << "Lan hoan vi thu " << demHoanVi << ": ";
        XuatMang(b, N);
    }
    cout<<"Mang da chon truc tiep: ";
    XuatMang(b, N);
}
void NoiBot(int a[], int N, int &dem1, int &dem2) {
    int b[100];
    SaoChepMang(a, b, N);
    int demHoanVi = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = N - 1; j > i; j--) {
        dem2++;
            if (b[j] < b[j-1]) {
                dem1+=3;
                HoanVi(b[j], b[j-1]);
                demHoanVi++;
                cout << "Lan hoan vi thu " << demHoanVi << ": ";
                XuatMang(b, N);
            }
        }
    }
    cout<<"Mang da noi bot: ";
    XuatMang(b, N);
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
    cout << "so lan so sanh " << dem2 << endl;
    dem1 = 0; dem2 = 0;
    ChonTT(a, N, dem1, dem2);
    cout << "so lan gan: " << dem1 << endl;
    cout << "so lan so sanh " << dem2 << endl;
    dem1 = 0; dem2 = 0;
    NoiBot(a, N, dem1, dem2);
    cout << "so lan gan: " << dem1 << endl;
    cout << "so lan so sanh " << dem2;
}