#include <iostream>
using namespace std;
struct SinhVien
{
	char mssv[12];
	char hoten[30];
	char ntns[20];
	char phai;
	float toan, ly, hoa;
};
int main() {
	SinhVien sv;
	cout << "Nhap ma so sv: ";
	gets_s(sv.mssv);
	cout << "Nhap ho ten: ";
	gets_s(sv.hoten);
	cout << "Nhap ngay thang nam sinh: ";
	gets_s(sv.ntns);
	cout << "Nhap phai: ";
	cin >> sv.phai;
	cout << "Nhap diem toan ly hoa: ";
	cin >> sv.toan >> sv.ly >> sv.hoa;
	cout<<"Thong tin sinh vien:"<<endl;
	cout << "MSSV: " << sv.mssv << endl;
	cout << "Ho ten: " << sv.hoten << endl;
	cout << "Ngay thang nam sinh: " << sv.ntns << endl;
	cout << "Phai: " << sv.phai << endl;
	cout << "diem toan ly hoa la: ";
	cout << "(" << sv.toan << "," << sv.ly << "," << sv.hoa << ")";
	
}
