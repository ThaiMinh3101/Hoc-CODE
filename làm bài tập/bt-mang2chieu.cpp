#include <iostream>
using namespace std;
/*câu 1*/
void gtriamlonnhat(int a[50][50], int &m, int &n) {
    int maxam;
    int cosoam = 0;
    
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (a[j][i] < 0) {
                if (cosoam == 0) {
                    maxam = a[j][i];
                    cosoam = 1;
                } else if (a[j][i] > maxam) {
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
void vtrigiatrimin(int a[50][50], int &m, int &n, int &d, int &c) {
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
    cout << "Gia tri nho nhat la: "<<min<<" tai vi tri ["<<d<<"]["<<c<<"]" << endl;
}
/*câu 3*/
int tongcotle(int a[50][50], int &m, int &n) {
    int tong = 0;
    for (int j = 0; j < m; j++) {
        for (int i = 1; i < n; i+=2) {
            tong = tong + a[j][i];
        }
    }
    return tong;
}
/*câu 4*/
int tbphantuchan (int a[50][50], int &m, int &n) {
    int dem = 0, tong = 0;
    float tb;
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++ ) {
            if (a[j][i] % 2 == 0) {
                tong = tong + a[j][i];
                dem++;
            }
        }
    }
    tb = (float)tong / dem;
    if (dem > 0) {
        return tb;
    } else {
        return 0;
    }
}
/*câu 5*/
int tongtungdong (int a[50][50], int &m, int &n, int dong) {
    int tong = 0;
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (j == dong) {
                tong += a[j][i];
            }
        }
    }
    return tong;
}
/*câu 6*/
void cotcotblonnhat(int a[50][50], int &m, int &n) {
    float tbcot[50];
    for (int i = 0; i < m; i++) {
        int tong = 0;
        for (int j = 0; j < n; j++) {
            tong = tong + a[j][i];
        }
        tbcot[i] = (float)tong / n;
    }
    // Tìm cột có TB lớn nhất
    int maxcot = 0;
    for (int j = 0; j < m; j++) {
        if (tbcot[j] > tbcot[maxcot]) {
            maxcot = j;
        }
    }
    cout << "Cot co trung binh lon nhat la cot " << maxcot << " voi gia tri: " << tbcot[maxcot] << endl;
}
/*câu 7*/
void tbphantuminmoicot(int a[50][50], int &m, int &n) {
    for (int i = 0; i < m; i++) {
    }
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
    int dong;
    cout << "Nhap dong can tinh tong: ";
    cin >> dong;
    cout << "Tong cac gia tri o dong " << dong << ": " << tongtungdong(a, m, n, dong) << endl;
    cotcotblonnhat(a, m, n);
    return 0;
}
