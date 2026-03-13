using namespace std;
#include <iostream>
int main()
{
    int a, b, c, d, e, chan1, chan2, chan3, chan4, chan5, sochan;
    cout << "nhap vao 5 so lan luot a,b,c,d,e: ";
    cin>>a>>b>>c>>d>>e;
    if (a % 2 ==0)
    chan1 = 1;
    else
    chan1 = 0;
    if (b % 2 ==0)
    chan2 = 1;
    else
    chan2 = 0;
    if (c % 2 ==0)
    chan3 = 1;
    else
    chan3 = 0;
    if (d % 2 ==0)
    chan4 = 1;
    else
    chan4 = 0;
    if (e % 2 ==0)
    chan5 = 1;
    else
    chan5 = 0;
    sochan = chan1 + chan2 + chan3 + chan4 + chan5;
    cout<<"Co "<<sochan<<" so chan";
    return 0;
}