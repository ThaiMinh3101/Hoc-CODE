#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Cau 5: Ham nhap mang so thuc a co N phan tu
void NhapMang(float a[], int N) {
    for (int i = 0; i < N; i++) {
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
}

void XuatMang(float a[], int N) {
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Ham hoan vi dung cho sap xep
void HoanVi(float &a, float &b) {
    float tam = a;
    a = b;
    b = tam;
}

// Ham sap xep tang dan (dung de chuan bi cho tim kiem nhi phan)
void SapXepTangDan(float a[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (a[i] > a[j]) {
                HoanVi(a[i], a[j]);
            }
        }
    }
}

// Cau 6: Ham tim kiem nhi phan trong mang da sap xep tang
int TimKiemNhiPhan(float a[], int N, float X) {
    int left = 0;
    int right = N - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] == X) {
            return mid;
        } else if (a[mid] < X) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Khong tim thay
}

// Cau 7: Ham sap xep giam dan bang phuong phap doi cho truc tiep
void SapXepGiamDan(float a[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (a[i] < a[j]) {
                HoanVi(a[i], a[j]);
            }
        }
    }
}

// Câu 8: Độ phức tạp của thuật toán tìm kiếm nhị phân
//
// Sau bước    Còn lại
//    0          n
//    1          n/2
//    2          n/4
//    3          n/8
//    k          n/2ᵏ
//
// Dừng khi còn 1 phần tử:
// n/2ᵏ = 1 ⇒ 2ᵏ = n
//
// log₂n là gì?
// log₂n = "2 mũ mấy thì bằng n?"
// Nó là phép ngược của lũy thừa, giống như:
//   2³ = 8    thì log₂8    = 3
//   2⁴ = 16   thì log₂16   = 4
//   2¹⁰ = 1024 thì log₂1024 = 10
//
// Ví dụ cho dễ hiểu:
//   Dãy có n = 8 phần tử:
//     8 → 4 → 2 → 1
//     Chia đôi 3 lần thì còn 1, nên k = 3. Kiểm tra: log₂8 = 3 ✓
//
//   Dãy có n = 16 phần tử:
//     16 → 8 → 4 → 2 → 1, chia 4 lần, và log₂16 = 4 ✓
//
// Tóm lại: k là số lần chia đôi, và số lần chia đôi từ n về 1
// chính là log₂n theo đúng định nghĩa của log.
//
// Tốt nhất: O(1)     - tìm được X ngay ở lần chia đầu tiên (phần tử ở giữa)
// Xấu nhất: O(log n) - phải chia đôi đến khi còn 1 phần tử
//
// Độ phức tạp của thuật toán được tính theo trường hợp xấu nhất => O(log n)
// => Độ phức tạp: O(log n)



