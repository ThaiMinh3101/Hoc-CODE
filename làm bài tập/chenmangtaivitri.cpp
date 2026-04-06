#include <iostream>
using namespace std;
void chenMangTaiViTri(int a[], int &N) // truyền tham chiếu cho N để có thể tăng N sau khi chèn phần tử
{
    // mảng [1 2 3 4 5]
    // chèn số 10 vào vị trí 2
    // mảng [1 2 10 3 4 5]
    int X;
    cout << "nhap vi tri X can chen: ";
    cin >> X;
    for (int i = N; i > X; i--) // N-1 là vị trí cuối mảng còn cho i = N là cho mảng nhích thêm 1 phần tử để có chỗ trống ra
    {
        a[i] = a[i - 1];
    }
    cout << "nhap gia tri can chen: ";
    cin >> a[X];
    N++; // tăng N số nguyên cần dùng sau khi chèn
}