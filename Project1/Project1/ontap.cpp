#include <iostream>
using namespace std;
int TinhTich(int a, int b);
int LaSoChan(int a);
int main()
{
	int a, b, c, d, e, n, sohientai;
	cout << "Nhap vao lan luot 5 so: ";
	cin >> a >> b >> c >> d >> e;
	int t1 = TinhTich(a, b);
	int t2 = TinhTich(t1, c);
	int t3 = TinhTich(t2, d);
	int tich = TinhTich(t3, e);
	cout << "tich la: " << tich << endl;

	cout << "nhap vao 1 so nguyen n: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << "Nhap vao " << n << " so nguyen: ";
		cin >> sohientai;
		if (LaSoChan(sohientai) == 1)
			cout << sohientai << " la so chan" << endl;
	}

	return 0;
}

int TinhTich(int a, int b)
{
	int tich = a * b;
	return tich;
}

int LaSoChan(int a)
{
	if (a % 2 == 0)
		return 1;
	return 0;
}