#include <iostream>
using namespace std;

int bt1(int n, int &d1, int &d2)
{
    int S = 0;
    d1++; // Khởi tạo S = 0

    d1++; // Khởi tạo i = 1
    for (int i = 1; i <= n; i++)
    {
        d2++; // So sánh i <= n

        // Vòng lặp trong: tính tổng từ 1 đến i
        d1++; // Khởi tạo j = 1
        for (int j = 1; j <= i; j++)
        {
            d2++; // So sánh j <= i

            S += j;
            d1++; // Gán S

            d1++; // Gán j++
        }
        d2++; // So sánh j <= i (lần sai cuối của vòng lặp j)

        d1++; // Gán i++
    }
    d2++; // So sánh i <= n (lần sai cuối của vòng lặp i)

    return S;
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int d1 = 0, d2 = 0;
    int ketQua = bt1(n, d1, d2);

    cout << "Tong S = " << ketQua << endl;
    cout << "So phep gan (d1) = " << d1 << endl;
    cout << "So phep so sanh (d2) = " << d2 << endl;

    return 0;
}