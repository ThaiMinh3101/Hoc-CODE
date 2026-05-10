#include <iostream>
using namespace std;
struct ToaDo
{
	int x;
	int y;
};
//truy?n c?u tr�c cho h�m

//c�ch 1:
void Nhaptd1(ToaDo &td) {
	cout << "Nhap hoang do: ";
	cin >> td.x;
	cout << "Nhap tung do: ";
	cin >> td.y;
	
};


//c�ch 2:
ToaDo Nhaptd2() {
	ToaDo td;
	cout << "Nhap hoang do: ";
	cin >> td.x;
	cout << "Nhap tung do: ";
	cin >> td.y;
	return td;
};

//xuat ham cau truc
void Xuattd(ToaDo td) {
	cout << "td la: " << td.x << ", " << td.y << endl;
};

int main() {
	ToaDo td;
	Nhaptd1(td);
	Xuattd(td);
	ToaDo t = Nhaptd2();
	cout << "td2 la: " << t.x << ", " << t.y << endl;
}