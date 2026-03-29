#include <iostream>
using namespace std;
void demsochiahetcho3(int a[], int N) {
	int dem = 0;
	for (int i = 0; i < N; i++) {
		if (a[i] % 3 == 0)
			dem++;
	}
	cout << "So luong so chia het cho 3 trong mang la: " << dem << endl;
}
void insochiahetcho3(int a[], int N) {
	cout << "Cac so chia het cho 3 trong mang la: ";
	for (int i = 0; i < N; i++) {
		if (a[i] % 3 == 0)
			cout << a[i] << " ";
	}
	cout << endl;
}
void tongsovitrichan(int a[], int N) {
	int tong = 0;
	for (int i = 0; i < N; i++) {
		if(i % 2 == 0)
		tong += a[i];
	}
	cout << "Tong cac so vi tri chan trong mang la: " << tong << endl;
}
void insovitriletrongmang (int a[], int N) {
	cout << "Cac so vi tri le trong mang la: ";
	for (int i = 0; i < N; i++) {
		if (i % 2 != 0)
			cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
	int a[10];
	int N;
	do {
		cout << "Nhap so N (0 < N <= 10): ";
		cin >> N;
	} while (N <= 0 || N > 10);
	for (int i = 0; i < N; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	demsochiahetcho3(a, N);
	insochiahetcho3(a, N);
	tongsovitrichan(a, N);
	insovitriletrongmang(a, N);
}