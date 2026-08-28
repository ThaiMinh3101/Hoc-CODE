// Bài 2: Cài đặt thuật toán tìm kiếm nhị phân:
#include <iostream>
using namespace std;
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
void XuatLeftRight(int a[], int left, int right)
{
    cout << "Gia tri tu Left den Right: ";
    for (int i = left; i <= right; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int BinarySearch(int a[], int N, int X)
{
    SapXepTangDan(a, N);
    int left = 0;
    int right = N - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        cout << "Mang da phan chia: ";
        for (int i = mid; i <= right; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        cout << "Vi tri cua a[mid]: " << mid << endl;
        cout << "Gia tri cua a[mid]: " << a[mid] << endl;
        cout << "Thuc hien so sanh: " << a[mid] << " va " << X << endl;
        if (a[mid] == X)
        {
            return mid;
        }
        else if (a[mid] < X)
        {
            cout << "Gia tri cua a[mid]: " << a[mid] << " nho hon " << X << endl;
            left = mid + 1;
            cout << "Vi tri cua Left: " << left << ", Right: " << right << endl;
            XuatLeftRight(a, left, right);
        }
        else
        {
            cout << "Gia tri cua a[mid]: " << a[mid] << " lon hon " << X << endl;
            right = mid - 1;
            cout << "Vi tri cua Left: " << left << ", Right: " << right << endl;
            XuatLeftRight(a, left, right);
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
    for (int i = 0; i < N; i++)
    {
        cout << "Nhap phan tu a[" << i << "]: ";
        cin >> a[i];
    }
    int X;
    cout << "Nhap gia tri can tim: ";
    cin >> X;
    int kq = BinarySearch(a, N, X);
    if (kq != -1)
    {
        cout << "Tim thay " << X << " tai vi tri " << kq << endl;
    }
    else
    {
        cout << "Khong tim thay " << X << " trong mang" << endl;
    }
    return 0;
}