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
void DoiChoTTTD (int a[], int N, int &dem1, int &dem2) {
    int demHoanVi = 0;
    for (int i = 0; i < N-1; i++) {
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
}
void DoiChoTTGD (int a[], int N, int &dem1, int &dem2) {
    int demHoanVi = 0;
    for (int i = 0; i < N-1; i++) {
        for (int j = i + 1; j < N; j++) {
            dem2++;
            if (a[i] < a[j]) {
                dem1 += 3;
                HoanVi(a[i], a[j]);
                demHoanVi++;
                cout << "Lan hoan vi thu " << demHoanVi << ": ";
                XuatMang(a, N);
            }
        }
    }
}
void ChonTTTD(int a[], int N, int &dem1, int &dem2) {
    int demHoanVi = 0;
    for (int i = 0; i < N -1; i++) {
        int min = i;
        for (int j = i + 1; j < N; j++) {
            dem2++;
            if (a[min] > a[j]) {
                min = j;
                dem1++;
            }
        }
        dem2++;
        if (min != i) {
            HoanVi(a[min], a[i]);
            dem1+=3;
        }
        demHoanVi++;
        cout << "Lan hoan vi thu " << demHoanVi << ": ";
        XuatMang(a, N);
    }
}
void ChonTTGD(int a[], int N, int &dem1, int &dem2) {
    int demHoanVi = 0;
    for (int i = 0; i < N -1; i++) {
        int min = i;
        for (int j = i + 1; j < N; j++) {
            dem2++;
            if (a[min] < a[j]) {
                min = j;
                dem1++;
            }
        }
        dem2++;
        if (min != i) {
            HoanVi(a[min], a[i]);
            dem1+=3;
        }
        demHoanVi++;
        cout << "Lan hoan vi thu " << demHoanVi << ": ";
        XuatMang(a, N);
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
    int luachon;

    do {
        cout<<"------BANG LUA CHON CONG VIEC MUON LAM------\n";
        cout << "1. Doi cho truc tiep tang dan\n";
        cout << "2. Doi cho truc tiep giam dan\n";
        cout << "3. Chon truc tiep tang dan\n";
        cout << "4. Chon truc tiep giam dan\n";
        cout<<"Nhap vao so thu tu dua tren viec muon lam cua ban(1-4): ";
        cin>>luachon;
    } while (luachon < 1 || luachon > 4);// while kết thúc vòng lặp khi người dùng nhập đúng

    switch (luachon) {
        case 1: {
            int dem1 = 0, dem2 = 0;
            DoiChoTTTD(a, N, dem1, dem2);
            cout << "Mang da sap xep doi cho truc tiep tang dan la: ";
            XuatMang(a, N);
            cout << "so lan gan: " << dem1 << endl;
            cout << "so lan so sanh " << dem2;
            break;
        }
        case 2: {
            int dem1 = 0, dem2 = 0;
            DoiChoTTGD(a, N, dem1, dem2);
            cout << "Mang da sap xep doi cho truc tiep giam dan la: ";
            XuatMang(a, N);
            cout << "so lan gan: " << dem1 << endl;
            cout << "so lan so sanh " << dem2;
            break;
        }
        case 3: {
            int dem1 = 0, dem2 = 0;
            ChonTTTD(a, N, dem1, dem2);
            cout << "Mang da sap xep chon truc tiep tang dan la: ";
            XuatMang(a, N);
            cout << "so lan gan: " << dem1 << endl;
            cout << "so lan so sanh " << dem2;
            break;
        }
        case 4: {
            int dem1 = 0, dem2 = 0;
            ChonTTGD(a, N, dem1, dem2);
            cout << "Mang da sap xep chon truc tiep giam dan la: ";
            XuatMang(a, N);
            cout << "so lan gan: " << dem1 << endl;
            cout << "so lan so sanh " << dem2;
            break;
        }
    }
    return 0;
}