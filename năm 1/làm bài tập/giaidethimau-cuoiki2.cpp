#include <iostream>
using namespace std;
/*câu 1*/
int tinhgiaithua(int n) {
    int giaithua = 1;
    for (int i = 1; i <= n; i ++) {
        giaithua *= i;
    }
    return giaithua;
}
/*câu 2*/
void nhapmang(int a[], int &n) {
    for (int i = 0; i < n; i++) {
        cout<<"Nhap vao phan tu a["<<i<<"]: ";
        cin>>a[i];
    }
}
void xuatmang(int a[], int n) {
    cout<<"Mang da nhap la: ";
    for (int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
}

/* câu 3 */
int tongptduongcheochinh (int p[10][10]) {
    int tong = 0;
    for (int m = 0; m < 10; m++) {
        for (int n = 0; n < 10; n++) {
            if (m == n) {
                tong += p[m][n];
            }
        }
    }
    return tong;
}

/* câu 4 */
struct SinhVien {
    char mssv[10];
    char hoten[30];
    float diemTB;
};

int main() {
    /*câu 1*/
    int a,b;
    cout<<"Nhap vao 2 so nguyen duong a va b: ";
    cin>>a>>b;
    int S1 = tinhgiaithua(a) + tinhgiaithua(b);
    cout<<"Tong giai thua cua "<<a<<" va "<<b<<" la: "<<S1<<endl;

    /*câu 2*/
    int m[50], n;
    cout<<"Nhap vao so phan tu can dung: ";
    cin>>n;
    nhapmang(m, n);
    xuatmang(m, n);

    /* câu 3 */
    int p[10][10];
    for (int m = 0; m < 10; m++) {
        for (int n = 0; n < 10; n++) {
            cout<<"nhap phan tu p["<<m<<"]["<<n<<"]: ";
            cin>>p[m][n];
        }
    }
    int S3 = tongptduongcheochinh(p);
    cout<<"Tong cac phan tu tren duong cheo chinh la: "<<S3<<endl;

    char c[50];
    cout<<"Nhap vao chuoi ki tu: ";
    gets(c);
    int dodaichuoi = strlen(c);
    cout<<"Do dai chuoi la: "<<dodaichuoi<<endl;
    int daonguocchuoi = strrev(c);
    cout<<"Chuoi dao nguoc la: "<<daonguocchuoi<<endl;
    puts(c);

    /* câu 4 */
    SinhVien sv;
    cout<<"Nhap MSSV: ";
    gets(sv.mssv);
    cout<<"Nhap ho va ten: ";
    gets(sv.hoten);
    cout<<"Nhap diem trung binh: ";
    cin>>sv.diemTB;
    cout<<"Thong tin sinh vien:"<<endl;
    cout<<"MSSV: "<<sv.mssv<<endl;
    cout<<"Ho va ten: "<<sv.hoten<<endl;
    cout<<"Diem trung binh: "<<sv.diemTB<<endl;
}