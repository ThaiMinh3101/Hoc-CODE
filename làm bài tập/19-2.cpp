using namespace std;
#include <iostream>
int main()
{
    int a,b;
    cout<<"nhap vao lan luot a va b: ";
    cin>>a>>b;
    while(a<b){
        do {
        cout<<"nhap lai a va b: ";
        cin>>a>>b; 
        } while (a<b);
    }
    cout<<a<<">"<<b;
    return 0;
}