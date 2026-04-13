#include <iostream>
using namespace std;
void xuat_ma_tran(int a[50][50], int &n, int &m) {
	cout << "----MaTran----" << endl;
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++)
			cout << a[j][i] << " ";
		cout << endl;
	}
}
int main() {
	int a[50][50];
	int n, m;
	cout << "Nhap so hang: ";
	cin >> n;
	cout << "Nhap so cot: ";
	cin >> m;
	xuat_ma_tran(a, n, m);
	return 0;
}