using namespace std;
#include <iostream>
int main()
{
   int i,N;
   i=1;
    cout<<"Nhap N: ";
    cin>>N;
    do {
        cout<<N<<"x"<<i<<"="<<N*i<<endl;
        i=i+1;
    } while (i<=10);
    return 0;
}