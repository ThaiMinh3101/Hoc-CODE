#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Cau 5: Ham nhap mang so thuc a co N phan tu
void NhapMang(float a[], int N) {
    for (int i = 0; i < N; i++) {
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
}

void XuatMang(float a[], int N) {
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Ham hoan vi dung cho sap xep
void HoanVi(float &a, float &b) {
    float tam = a;
    a = b;
    b = tam;
}

// Ham sap xep tang dan (dung de chuan bi cho tim kiem nhi phan)
void SapXepTangDan(float a[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (a[i] > a[j]) {
                HoanVi(a[i], a[j]);
            }
        }
    }
}

// Cau 6: Ham tim kiem nhi phan trong mang da sap xep tang
int TimKiemNhiPhan(float a[], int N, float X) {
    int left = 0;
    int right = N - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] == X) {
            return mid;
        } else if (a[mid] < X) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Khong tim thay
}

// Cau 7: Ham sap xep giam dan bang phuong phap doi cho truc tiep
void SapXepGiamDan(float a[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (a[i] < a[j]) {
                HoanVi(a[i], a[j]);
            }
        }
    }
}

