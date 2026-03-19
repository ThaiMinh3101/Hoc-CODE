using namespace std;
#include <iostream>
int main()
{
    float km, dd1, dd2, dd3, dd4, dd5, tt;
    cout<<"Nhap vao so km da di duoc: ";
    cin>>km;
    if (km <= 1)
    {
        dd1 = km * 12000;
        tt = dd1;
    }
    else if (km > 1 && km <= 10)
    {
        dd1 = 1 * 12000;
        dd2 = (km - 1) * 15000;
        tt = dd1 + dd2;
    }
    else if (km > 10 && km <= 20)
    {
        dd1 = 1 * 12000;
        dd2 = 9 * 15000;
        dd3 = (km - 10) * 13000;
        tt = dd1 + dd2 + dd3;
    }
    else if (km > 20 && km <= 50)
    {
        dd1 = 1 * 12000;
        dd2 = 9 * 15000;
        dd3 = 10 * 13000;
        dd4 = (km - 20) * 12000;
        tt = dd1 + dd2 + dd3 + dd4;
    }
    else
    {
        dd1 = 1 * 12000;
        dd2 = 9 * 15000;
        dd3 = 10 * 13000;
        dd4 = 30 * 12000;
        dd5 = (km - 50) * 12000;
        tt = (dd1 + dd2 + dd3 + dd4 + dd5) - ((dd1 + dd2 + dd3 + dd4 + dd5)/10);
    }
    cout<<"Tien taxi la:  "<<tt<<" dong"<<endl;
    return 0;
}