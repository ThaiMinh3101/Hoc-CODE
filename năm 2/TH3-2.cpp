//Bài 2: Cài đặt thuật toán tìm kiếm nhị phân:
#include <iostream>
using namespace std;
void HoanVi(int &a, int &b) {
    // Hoán vị hai số nguyên
    int temp = a;
    a = b;
    b = temp;
}
void SapXepTangDan(int a[], int N) {
    for (int i = 0; i < N; i++)
        for (int j = i + 1; j < N; j++)
            if (a[i] > a[j])
                HoanVi(a[i], a[j]);
}
int BinarySearch(int a[], int N, int X, int &dem) {
    SapXepTangDan(a, N);
    int left = 0;
    int right = N - 1;
    int dem = 0;
    while (left <= right) {
        int mid = (left + right) / 2;
        dem++;
        if (a[mid] == X) {
            return mid;
        }
        else if (a[mid] < X) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}