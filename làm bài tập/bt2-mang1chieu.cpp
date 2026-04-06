#include <iostream>
using namespace std;
void tongmang(int a[], int N) {
    int tong = 0;
    for (int i = 0; i < N; i++) {
        tong += a[i];
    }
    cout << "Tong cac so trong mang la: " << tong << endl;
}
void phantuduongnhonhat(int a[], int N) {
    int min = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] > 0 && a[i] % 2 == 0) {
            if (min == 0 || a[i] < min)
                min = a[i];
        }
    }
    if (min > 0)
        cout << "Phan tu duong nho nhat trong mang la: " << min << endl;
    else
        cout << "Khong co phan tu duong trong mang." << endl;
}
void sobangX(int a[], int N, int X) {
    int dem = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] == X) {
            dem++;
        }
    }
    if (dem == 0)
        cout << "Khong co phan tu nao bang " << X << " trong mang." << endl;
    else
        cout << "Co " << dem << " phan tu bang " << X << " trong mang." << endl;
}
void chenXvaovitritrongmang(int a[], int &N) {
    int X;
    cout << "nhap vi tri X can chen: ";
    cin >> X;
    for (int i = N; i > X; i--) // N-1 là vị trí cuối mảng còn cho i = N là cho mảng nhích thêm 1 phần tử để có chỗ trống ra
    {
        a[i] = a[i - 1];
    }
    cout << "nhap gia tri can chen: ";
    cin >> a[X];
    N++;
    cout << "Mang sau khi chen: ";
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
}
void xoaphantubangXcuoicungtrongmang(int a[], int &N){
    // 1 2 3 4 5 6 7 5 9
    // xoa so 5 cuoi cung
    // 1 2 3 4 5 6 7 9
    int X, vitricuoi = -1; //cho vitricuoi = -1 để nếu không tìm thấy phần tử nào bằng X thì sẽ không xoá phần tử nào ở vòng lặp 2 thay vì đặt là 0
    cout << "nhap gia tri X can xoa: ";
    cin >> X;
    for (int i = N -1; i >= 0; i--) {
        if (a[i] == X) {
            vitricuoi = i;
            break;
        }
    }
    if (vitricuoi != -1) {
        for (int i = vitricuoi; i < N - 1; i++) {
            a[i] = a[i + 1];
        }
        N--;
        cout << "Mang sau khi xoa: ";
        for (int i = 0; i < N; i++) {
            cout << a[i] << " ";
        }
    } else {
        cout << "Khong co phan tu nao bang " << X << " trong mang." << endl;
    }
}

int main() {
    int a[100];
    int N;
    cout << "nhap N: ";
    cin >> N;
    for (int i = 0; i < N; i++) {
        cout << "nhap mang a[" << i << "]: ";
        cin >> a[i];
    }
    tongmang(a, N);
    phantuduongnhonhat(a, N);
    int X;
    cout << "nhap gia tri X: ";
    cin >> X;
    sobangX(a, N, X);
    chenXvaovitritrongmang(a, N);
    cout << endl;
    xoaphantubangXcuoicungtrongmang(a, N);
}