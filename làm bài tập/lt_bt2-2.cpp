using namespace std;
#include <iostream>
void tinhgiaithua()
{
    int N;
    cout<<"Nhap so nguyen N: ";
    cin>>N;
    int s=1;
    for(int i=1;i<=N;i++)
    {
        s=s*i;
    }
    cout<<"Giai thua cua "<<N<<" la: "<<s;
}
int main()
{
    tinhgiaithua();
    return 0;
}