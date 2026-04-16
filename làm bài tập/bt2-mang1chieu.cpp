#include <iostream>
using namespace std;
/*câu 1*/
void gtriamlonnhat(int a[50][50], int m, int n) {
    int maxam;
    int cosoam = 0;

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (a[j][i] < 0) {
                if (cosoam == 0) {
                    maxam = a[j][i];
                    cosoam = 1;
                }
                else if (a[j][i] > maxam) {
                    maxam = a[j][i];
                }
            }
        }
    }
    if (cosoam == 1)
        cout << "Gia tri am lon nhat: " << maxam << endl;
    else
        cout << "Khong co gia tri am" << endl;
}
/*câu 2*/
void vtrigiatrimin(int a[50][50], int m, int n, int& d, int& c) {
    float min = a[0][0];
    d = 0;
    c = 0;
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (a[j][i] < min) {
                min = a[j][i];
                d = j;
                c = i;
            }
        }
    }
    cout << "Gia tri nho nhat la: " << min << " tai vi tri [" << d << "][" << c << "]" << endl;
}
/*câu 3*/
int tongcotle(int a[50][50], int m, int n) {
    int tong = 0;
    for (int j = 0; j < m; j++) {
        for (int i = 1; i < n; i += 2) {
            tong = tong + a[j][i];
        }
    }
    return tong;
}
/*câu 4*/
int tbphantuchan(int a[50][50], int m, int n) {
    int dem = 0, tong = 0;
    float tb;
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (a[j][i] % 2 == 0) {
                tong = tong + a[j][i];
                dem++;
            }
        }
    }
    tb = (float)tong / dem;
    if (dem > 0) {
        return tb;
    }
    else {
        return 0;
    }
}
/*câu 5*/
void tongtungdong(int a[50][50], int m, int n) {
    for (int j = 0; j < m; j++) {
        int tong = 0;
        for (int i = 0; i < n; i++) {
            tong += a[j][i];
        }
        cout << "tong cua dong " << j << " = " << tong << endl;
    }
}
/*câu 6*/
void cotcotblonnhat(int a[50][50], int m, int n) {
    float tbcotlonnhat = -1000000;
    float cotlonnhat = -1;
    for (int i = 0; i < n; i++) {
        float tongcot = 0;
        for (int j = 0; j < m; j++) {
            tongcot = tongcot + a[j][i];
        }
        float tbcot = tongcot / n;
        if (cotlonnhat == -1 || tbcot > tbcotlonnhat) {
            tbcotlonnhat = tbcot;
            cotlonnhat = i;
        }
    }
    cout << "Cot co trung binh lon nhat la cot " << cotlonnhat << " voi gia tri: " << tbcotlonnhat << endl;
}
/*câu 7*/
int tbphantuminmoicot(int a[50][50], int m, int n) {
    float tong = 0;
    for (int i = 0; i < n; i++) {
        float mincot = a[0][i];
        for (int j = 1; j < m; j++) {
            if (a[j][i] < mincot) {
                mincot = a[j][i];
            }
            tong += mincot;
        }
    }
    return (tong / n);
}
int main() {
    int a[50][50], m, n;
    cout << "Nhap so dong: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            cout << "Nhap a[" << j << "][" << i << "]: ";
            cin >> a[j][i];
        }
    }
    int d, c;
    vtrigiatrimin(a, m, n, d, c);
    gtriamlonnhat(a, m, n);
    cout << "Tong cac gia tri o cot le: " << tongcotle(a, m, n) << endl;
    cout << "Trung binh cong cac gia tri chan: " << tbphantuchan(a, m, n) << endl;
    tongtungdong(a, m, n);
    cotcotblonnhat(a, m, n);
    cout << "Trung binh cua cac phan tu nho nhat la: " << tbphantuminmoicot(a, m, n) << endl;
    return 0;
}