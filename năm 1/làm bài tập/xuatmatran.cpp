#include <iostream>
using namespace std;
void xuat_ma_tran(int a[50][50], int &m, int &n) {
	cout << "----MaTran----" << endl;
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++)
			cout << a[j][i] << " ";
		cout << endl;
	}
}
int main() {
	int a[50][50];
	int m, n;
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	xuat_ma_tran(a, m, n);
	return 0;
}