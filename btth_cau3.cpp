#include <iostream>
using namespace std;
int songay(int n,int m)
{
    int ngay;
    if (n==2){
        if (m%4==0)
            ngay=29;
        else
            ngay=28;
    }
    else if (n==4 || n==6 || n==9 || n==11)
        ngay=30;
    else
        ngay=31;
    return ngay;
}
int main()
{
    int n,m;
    do{
        cout<<"Nhap lan luot thang va nam: ";
        cin>>n>>m;
    }while (n<1 || n>12);
    int ngay=songay(n,m);
    cout<<"Thang "<<n<<" nam "<< " co "<<ngay<<" ngay."<<endl;
}