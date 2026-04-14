#include <iostream>
using namespace std;
void nhap_ma_tran(int a[50][50], int &m, int &n) {
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			cout << "Nhap a[" << j << "][" << i << "]: ";
			cin >> a[j][i];
		}
	}
}
int main() {
	int a[50][50];
	int m, n;
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	nhap_ma_tran(a, m, n);
	return 0;
}