using namespace std;
#include <iostream>
int main()
{
    int N,i,tong;
    do {
        cout<<"nhap N: ";
        cin>>N;
    } while (N <= 0);
    i = 1;
    tong = 0;
    do {
        if (N % i == 0) {
            cout<<i<<" ";
            tong = tong + i;
            i=i+1;
        } else
        i=i+1;
    } while (i <= N);
    cout <<endl<<"Tong uoc so cua " << N << " la: " << tong;
    return 0;
}