#include <iostream>
using namespace std;
void demsochantrongmang(int a[], int N) {
	int dem = 0;
	for (int i = 0; i < N; i++) {
		if (a[i] % 3 == 0)
			dem++;
	}
	cout << "so luong so chia het cho 3 trong mang la: " << dem << " ";
}
void insochantrongmang (int a[], int N) {
	cout << "cac so chia het cho 3 trong mang la: ";
	for (int i = 0; i < N; i++) {
		if (a[i] % 3 == 0)
		cout << a[i] << " ";
	}
}
void tongsochan(int a[], int N) {
	int tong = 0;
	for (int i = 0; i < N; i++) {
		if(a[i] % 3 == 0)
		tong += a[i];
	}
	cout << "Tong cac so chia het cho 3 trong mang la: " << tong << endl;
}
void insoletrongmang (int a[], int N) {
	cout << "Cac so le trong mang la: ";
	for (int i = 0; i < N; i++) {
		if (a[i] % 2 != 0)
			cout << a[i] << " ";
	}
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
	demsochantrongmang(a, N);
	cout << endl;
	insochantrongmang(a, N);
	cout << endl;
	tongsochan(a, N);
	cout << endl;
	insoletrongmang(a, N);
}