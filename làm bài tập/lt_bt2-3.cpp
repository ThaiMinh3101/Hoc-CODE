using namespace std;
#include <iostream>
void tinhgiaithua(int a, int b, int c)
{
    int gt1=1;
    for(int i=1;i<=a;i++)
    {
        gt1=gt1*i;
    }
    int gt2=1;
    for(int i=1;i<=b;i++)
    {
        gt2=gt2*i;
    }
    int gt3=1;
    for(int i=1;i<=c;i++)
    {
        gt3=gt3*i;
    }
    int s=gt1+gt2+gt3;
    cout<<"Tong giai thua cua 3 so la: "<<s;
}
int main()
{
    int a,b,c;
    cout<<"Nhap lan luot 3 so a,b,c: ";
    cin>>a>>b>>c;
    tinhgiaithua(a,b,c);
    return 0;
}