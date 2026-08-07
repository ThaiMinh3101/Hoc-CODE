using namespace std;
#include <iostream>
int main()
{
    int x,y;
    do {
        cout<<"nhap vao so nguyen duong x: ";
        cin>>x;
        if (x<=0)
        cout<<"Loi: x phai la so nguyen duong. ";
    } while (x<0);
    do {
        cout<<"nhap vao so nguyen duong y: ";
        cin>>y;
        if (y<=0)
        cout<<"Loi: y phai la so nguyen duong. ";
    } while (y<0);
    while ((x * y) % 5 != 0) {
        cout << "Tich x * y khong chia het cho 5. Vui long nhap lai x va y"<<endl;
        do {
            cout << "Nhap lai x: ";
            cin >> x;
        } while (x <= 0);
        do {
            cout << "Nhap lai y: ";
            cin >> y;
        } while (y <= 0);
    }
    cout<<"Tich x*y chia het cho 5";
    return 0;
}