#include <iostream>
using namespace std;
/*câu 1*/
void gtriamlonnhat(int a[50][50], int n, int m) {
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
void vtrigiatrimin(int a[50][50], int n, int m, int &d, int &c) {
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
int tongcotle(int a[50][50], int n, int m) {
    int tong = 0;
    for (int j = 0; j < m; j++) {
        for (int i = 1; i < n; i+=2) {
            tong = tong + a[j][i];
        }
    }
    return tong;
}

int main() {
    int a[50][50], n, m;
    cout << "Nhap so hang: ";
    cin >> n;
    cout << "Nhap so cot: ";
    cin >> m;
    for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			cout << "Nhap a[" << j << "][" << i << "]: ";
			cin >> a[j][i];
		}
	}
    int d, c;
    vtrigiatrimin(a, n, m, d, c);
    gtriamlonnhat(a, n, m);
    cout << "Tong cac gia tri o cot le: " << tongcotle(a, n, m) << endl;
    return 0;
}
