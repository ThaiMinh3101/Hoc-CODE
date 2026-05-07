#include <iostream>
using namespace std;
struct ToaDo
{
	int x;
	int y;
};
//truy?n c?u trúc cho hàm

//cách 1:
void Nhaptd1(ToaDo &td) {
	cout << "Nhap hoang do: ";
	cin >> td.x;
	cout << "Nhap tung do: ";
	cin >> td.y;
	
};
void Xuattd(ToaDo td) {
	cout << "td la: " << td.x << ", " << td.y << endl;
};

//cách 2:
ToaDo Nhaptd2() {
	ToaDo td;
	cout << "Nhap hoang do: ";
	cin >> td.x;
	cout << "Nhap tung do: ";
	cin >> td.y;
	return td;
};

int main() {
	ToaDo td;
	Nhaptd1(td);
	Xuattd(td);
	ToaDo t = Nhaptd2();
	cout << "td2 la: " << t.x << ", " << t.y << endl;
}