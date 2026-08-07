using namespace std;
#include <iostream>
int main()
{
    int N,i,dem;
    do {
        cout<<"nhap N: ";
        cin>>N;
    } while (N <= 0);
    i = 1;
    dem = 0;
    do {
        if (N % i == 0) {
            cout<<i<<" ";
            i=i+1;
            dem = dem + 1;
        } else
        i=i+1;
    } while (i <= N);
    cout <<endl<<"Tong uoc so cua " << N << " la: " << dem;
    return 0;
}