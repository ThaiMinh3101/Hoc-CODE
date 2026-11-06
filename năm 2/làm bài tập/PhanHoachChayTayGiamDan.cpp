#include <iostream>
using namespace std;

void NhapMang(int a[], int N) {
    for (int i = 0; i < N; i++) {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}

// Hàm chỉ xuất đoạn từ l đến r
void XuatMangLR(int a[], int l, int r) {
    for (int i = l; i <= r; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void XuatMang(int a[], int N) {
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void HoanVi(int &a, int &b) {
    int tam = a;
    a = b;
    b = tam;
}

void QuickSortGiamDan(int a[], int l, int r, int &demHoanVi) {
    // Nếu đoạn chỉ có 1 phần tử hoặc không hợp lệ thì dừng
    if (l >= r) return;

    int i = l, j = r;
    int mid = (l + r) / 2;
    int x = a[mid];

    // In thông tin phân đoạn hiện tại, chốt và giá trị gán
    cout << "\n----------------------------------------" << endl;
    cout << "Dang xet doan [l = " << l << ", r = " << r << "]: ";
    XuatMangLR(a, l, r);
    cout << "Gan chot x = a[" << mid << "] = " << x << endl;

    while (i <= j) {
        // GIẢM DẦN: Đổi chiều dấu so sánh ở đây
        while (a[i] > x) i++; // Tìm phần tử lớn hơn chốt ở bên trái
        while (a[j] < x) j--; // Tìm phần tử nhỏ hơn chốt ở bên phải
        
        if (i <= j) {
            if (i != j) {
                HoanVi(a[i], a[j]);
                demHoanVi++;
                // In rõ lần hoán vị thứ mấy và mảng con tại thời điểm đó
                cout << "   -> Lan hoan vi thu " << demHoanVi << " (doi a[" << i << "]=" << a[j] << " va a[" << j << "]=" << a[i] << "): ";
                XuatMangLR(a, l, r); 
            }
            i++;
            j--;
        }
    }

    // Hiển thị thông tin cắt mảng để biết ranh giới trái/phải
    cout << "-> Cat mang thanh 2 nhanh:" << endl;
    cout << "   + Nhanh trai (tu " << l << " den " << j << "): "; XuatMangLR(a, l, j);
    cout << "   + Nhanh phai (tu " << i << " den " << r << "): "; XuatMangLR(a, i, r);

    // Đệ quy tiếp 2 vế
    if (l < j)
        QuickSortGiamDan(a, l, j, demHoanVi);
    if (i < r)
        QuickSortGiamDan(a, i, r, demHoanVi);
}

int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    int a[n];
    
    NhapMang(a, n);
    
    cout << "\nMang ban dau: ";
    XuatMang(a, n);
    cout << "========================================" << endl;

    int demHoanVi = 0;
    QuickSortGiamDan(a, 0, n - 1, demHoanVi);

    cout << "\n========================================" << endl;
    cout << "Mang sau khi sap xep (Giam dan): ";
    XuatMang(a, n);
    cout << "Tong so lan hoan vi: " << demHoanVi << endl;
    
    return 0;
}