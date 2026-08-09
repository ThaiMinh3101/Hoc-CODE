#include <iostream>
using namespace std;

// Hàm tính tổng và đếm số phép gán (d1), số phép so sánh (d2)
int bt1(int n, int &d1, int &d2) {
    int P = 1; d1++; // Phép gán khởi tạo P = 1 (tổng con dau tien: 1)
    int S = 1; d1++; // Phép gán khởi tạo S = 1 (số hạng đầu tiên của S là 1)

    d1++; // Phép gán khởi tạo biến i = 2 trong vòng lặp for
    for (int i = 2; i <= n; i++) {
        d2++; // Đếm phép so sánh điều kiện i <= n (khi điều kiện đúng)
        P += i; d1++; // Phép gán P = P + i
        S += P; d1++; // Phép gán S = S + P
        d1++; // Phép gán i++ (hoặc i = i + 1) sau mỗi vòng lặp
    }
    d2++; // Đếm 1 lần phép so sánh i <= n cuối cùng (khi điều kiện sai để thoát lặp)

    return S;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int d1 = 0; // Biến đếm số phép gán
    int d2 = 0; // Biến đếm số phép so sánh
    // Gọi hàm và truyền đầy đủ 3 tham số
    int ketQua = bt1(n, d1, d2);

    cout << "Tong S = " << ketQua << endl;
    cout << "So phep gan da thuc hien (d1): " << d1 << endl;
    cout << "So phep so sanh da thuc hien (d2): " << d2 << endl;
    return 0;
}