#include <iostream>
using namespace std;
void demsochantrongmang(int a[], int N) {
	int dem = 0;
	for (int i = 0; i < N; i++) {
		if (a[i] % 3 == 0)
			dem++;
	}
	cout << "so luong so chia het cho 3 trong mang: " << dem << " ";
}
 
int main() {
	int a[10];
	int N;
	cout << "Nhap so N: ";
	cin >> N;
	for (int i = 0; i < N; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	demsochantrongmang(a, N);
}