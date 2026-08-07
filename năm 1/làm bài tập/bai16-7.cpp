using namespace std;
#include <iostream>
int main()
{
    int a, b, c, d, e, sole1, sole2, sole3, sole4, sole5, tongsole;
    cout << "nhap vao 5 so lan luot a,b,c,d,e: ";
    cin>>a>>b>>c>>d>>e;
    if (a % 2 !=0)
    sole1 = a;
    else
    sole1 = 0;
    if (b % 2 !=0)
    sole2 = b;
    else
    sole2 = 0;
    if (c % 2 !=0)
    sole3 = c;
    else
    sole3 = 0;
    if (d % 2 !=0)
    sole4 = d;
    else
    sole4 = 0;
    if (e % 2 !=0)
    sole5 = e;
    else
    sole5 = 0;
    tongsole = sole1 + sole2 + sole3 + sole4 + sole5;
    cout<<"Tong cac so le la: "<<tongsole<<endl;
    return 0;
}