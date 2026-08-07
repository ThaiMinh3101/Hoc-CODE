using namespace std;
#include <iostream>
float tinhtich(float a, float b)
{
    float s;
    s=a*b;
    return s;
}
int main()
{
    float a,b,c,d,e,s1;
    cout<<"Nhap 5 so thuc: ";
    cin>>a>>b>>c>>d>>e;
    s1 = tinhtich(a,b);
    s1 = tinhtich(s1,c);
    s1 = tinhtich(s1,d);
    s1 = tinhtich(s1,e);
    cout<<"Tich cua 5 so la: "<<s1<<endl;
    return 0;
}