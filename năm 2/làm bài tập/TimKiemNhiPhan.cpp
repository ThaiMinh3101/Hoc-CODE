#include <iostream>
using namespace std;
void NhapMang(int a[], int N) {
    srand(time(0));
    for (int i = 0; i < N; i++) {
        a[i] = rand() % 50; // Sinh so ngau nhien tu 0 den 49
    }
}
void XuatMang(int a[], int N) {
    cout << "Mang da nhap la: ";
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
void HoanVi(int &a, int &b)
{
    // Hoán vị hai số nguyên
    int temp = a;
    a = b;
    b = temp;
}
void SapXepTangDan(int a[], int N)
{
    for (int i = 0; i < N; i++)
        for (int j = i + 1; j < N; j++)
            if (a[i] > a[j])
                HoanVi(a[i], a[j]);
}
int BinarySearch(int a[], int N, int X)
{
    SapXepTangDan(a, N);
    int left = 0;
    int right = N - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        for (int i = mid; i <= right; i++) {
            cout << a[i] << " ";
        }
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
int main()
{
    int a[100];
    int N;
    cout << "Nhap so phan tu: ";
    cin >> N;
    NhapMang(a, N);
    XuatMang(a, N);
    int X;
    cout << "Nhap gia tri can tim: ";
    cin >> X;
    int kq = BinarySearch(a, N, X);
    if (kq != -1) {
        cout << "Tim thay " << X << " tai vi tri " << kq << endl;
    }
    else {
        cout << "Khong tim thay " << X << " trong mang" << endl;
    }
    return 0;
}