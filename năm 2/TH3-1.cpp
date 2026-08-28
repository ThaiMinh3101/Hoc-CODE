#include<iostream>
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
int LinearSearch(int a[], int N, int X)
{
    for (int i = 0; i < N; i++) {
        if (a[i] == X) {
            return i;
        }
    }
    return -1;
}
int main()
{
int a[50]; // Khai bao mang
int N; // Khai bao so phan tu thuc su cua mang
cout << "Nhap so phan tu cua mang:";
cin >> N; // Nhap so phan tu cua mang
NhapMang(a, N); // Nhap mang
XuatMang(a, N); // Xuat mang
int X;
cout << "\nNhap gia tri X can tim:";
cin >> X;
int kq;
kq = LinearSearch(a, N, X);
if (kq == -1)
cout<<"\nKhong co " <<X<<" trong mang"<<endl;
else
cout<<"\n"<< X<<" xuat hien o vi tri "<<kq<<"trong mang"<<endl;
return 0;
}