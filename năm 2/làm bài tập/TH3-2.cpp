// Bài 2: Cài đặt thuật toán tìm kiếm nhị phân:
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
void XuatViTriLeftRight(int a[], int left, int right)
{
    cout << "Vi tri tu Left den Right: ";
    for (int i = left; i <= right; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}
void XuatGiaTriLeftRight(int a[], int left, int right)
{
    cout << "Gia tri tu Left den Right: ";
    for (int i = left; i <= right; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int BinarySearch(int a[], int N, int X, int &dem)
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
        dem++;
        if (a[mid] == X)
        {
            return mid;
        }
        else if (a[mid] < X)
        {
            cout << "Gia tri cua a[mid]: " << a[mid] << " nho hon " << X << endl;
            cout << "Thuc hien left = mid + 1" << endl;
            left = mid + 1;
            XuatViTriLeftRight(a, left, right);
            XuatGiaTriLeftRight(a, left, right);
        }
        else
        {
            cout << "Gia tri cua a[mid]: " << a[mid] << " lon hon " << X << endl;
            cout << "Thuc hien right = mid - 1" << endl;
            right = mid - 1;
            XuatViTriLeftRight(a, left, right);
            XuatGiaTriLeftRight(a, left, right);
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
    int dem = 0;
    int kq = BinarySearch(a, N, X, dem);
    if (kq != -1)
    {
        cout << "Tim thay " << X << " tai vi tri " << kq << endl;
    }
    else
    {
        cout << "Khong tim thay " << X << " trong mang" << endl;
    }
    cout << "So lan so sanh da thuc hien: " << dem << endl;
    return 0;
}