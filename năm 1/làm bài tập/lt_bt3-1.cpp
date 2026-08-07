using namespace std;
#include <iostream>
void inbangcuuchuong()
{
    int N;
    cout<<"Nhap so nguyen N: ";
    cin>>N;
    for(int i=1;i<=10;i++)
    {
        cout<<N<<" x "<<i<<" = "<<N*i<<endl;
    }
}
int main()
{
    inbangcuuchuong();
    return 0;
}