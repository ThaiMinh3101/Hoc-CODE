using namespace std;
#include <iostream>
int main() {
    int a,b,c,d,i=1000;
    do{
        a=i/1000;
        b=(i/100)%10;
        c=(i/10)%10;
        d=i%10;
        if(a<=b && b<=c && c<=d){
            cout<<i<< " ";
        }
        i++;
    }while(i<10000);
    return 0;
}