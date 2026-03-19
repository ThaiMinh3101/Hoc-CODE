using namespace std;
#include <iostream>
void nhapbangcuuchuong(int N)
{
    for(int i=1;i<=10;i++)
    {
        cout<<N<<" x "<<i<<" = "<<N*i<<endl;
    }
}
int main()
{
    int N;
    cout<<"Nhap so nguyen N: ";
    cin>>N;
    nhapbangcuuchuong(N);
    return 0;
}