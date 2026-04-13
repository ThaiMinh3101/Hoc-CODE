#include <iostream>
using namespace std;
void nhap_ma_tran(int a[50][50], int &n, int &m) {
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			cout << "Nhap a[" << j << "][" << i << "]: ";
			cin >> a[j][i];
		}
	}
}
int main() {
	int a[50][50];
	int n, m;
	cout << "Nhap so hang: ";
	cin >> n;
	cout << "Nhap so cot: ";
	cin >> m;
	nhap_ma_tran(a, n, m);
	return 0;
}