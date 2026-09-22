#include<iostream>
using namespace std;
void NhapMang(int a[], int N) {
    srand(time(0));
    for (int i = 0; i < N; i++)
        a[i] = rand() % 50;
}
void XuatMang(int a[], int N){
    for (int i = 0; i < N; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
void SaoChepMang(int a[], int b[], int N){
    for (int i = 0; i < N; i++){
        b[i] = a[i];
    }
}

int main() {
    int a[50], b[50];
    int N;
    cout << "Nhap so phan tu can dung: ";
    cin >> N;
    NhapMang(a, N);
    XuatMang(a, N);
    SaoChepMang(a, b, N);
    cout << "Mang sau khi sao chep: ";
    XuatMang(b, N);
    return 0;
}