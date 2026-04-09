#include <iostream>
using namespace std;
void nhap_ma_tran(int a[50][100], int &n, int &m) {
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			cout << "Nhap a[" << j << "][" << i << "]: ";
			cin >> a[j][i];
		}
	}
}
void xuat_ma_tran(int a[50][100], int &n, int &m) {
	cout << "----MaTran----" << endl;
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++)
			cout << a[j][i] << " ";
		cout << endl;
	}
}
void timgiatriammax(int a[50][100], int&n, int&m) {
	int max = 0;
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {

		}
	}
}

int main()
{	
	/*n la hang, m la cot*/
	int a[50][100], n, m;
	cout << "Nhap lan luot n,m: ";
	cin >> n >> m;
	nhap_ma_tran(a, n, m);
	xuat_ma_tran(a, n, m);
}