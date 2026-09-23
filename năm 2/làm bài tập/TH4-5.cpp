#include <cstdlib>
#include <ctime>
#include <iostream>
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
void HoanVi(int &a, int &b) {
  // Hoán vị hai số nguyên
  int tam = a;
  a = b;
  b = tam;
}
void SapXepTD(int a[], int N, int &dem1, int &dem2) {
  for (int i = 0; i < N - 1; i++) {
    for (int j = i + 1; j < N; j++) {
      dem2++;
      if (a[i] > a[j]) {
        dem1 += 3;
        HoanVi(a[i], a[j]);
      }
    }
  }
}
void SapXepGD(int a[], int N, int &dem1, int &dem2) {
  for (int i = 0; i < N - 1; i++) {
    for (int j = i + 1; j < N; j++) {
      dem2++;
      if (a[i] > a[j]) {
        dem1 += 3;
        HoanVi(a[i], a[j]);
      }
    }
  }
}
int main() {
    int a[100];
    int N;
    cout<<"Nhap vao so phan tu can dung: ";
    cin >> N;
    int luachon;
    int dem1 = 0, dem2 = 0;
    NhapMang(a, N);
    cout << "Mang da nhap ngau nhien la: ";
    XuatMang(a, N);
    cout << "------BANG LUA CHON CONG VIEC MUON LAM------\n";
    cout << "1.Sap xep tang dan\n";
    cout << "2.Sap xep giam dan\n";

    do {
        cout<<"Nhap vao so thu tu dua tren viec muon lam cua ban(1-2): ";
        cin >> luachon;
        if (luachon > 2 || luachon < 1) {
            cout << "nhap sai vui long nhap lai(nhap 1-2): \n";
        }
    } while (luachon < 1 || luachon > 2); // while kết thúc vòng lặp khi người dùng nhập sai
    
    switch (luachon) {
    case 1:
        SapXepTD(a, N, dem1, dem2);
        cout << "Mang da sap xep tang dan la: ";
        XuatMang(a, N);
        cout << "so lan gan: " << dem1 << endl;
        cout << "so lan so sanh " << dem2;
        break;
    case 2:
        SapXepGD(a, N, dem1, dem2);
        cout << "Mang da sap xep giam dan la: ";
        XuatMang(a, N);
        cout << "so lan gan: " << dem1 << endl;
        cout << "so lan so sanh " << dem2;
        break;
    }
}