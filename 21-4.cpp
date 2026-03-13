using namespace std;
#include <iostream>
int main()
{
   int i,N;
   cout<<"Nhap vao so nguyen duong N: ";
    cin>>N;
    cout<<"Cac so chia het cho 7 tu 1 den "<<N<<" la:";
    i=1;
    if (N >= 1){
        do {
            if (i % 7 == 0) {
                cout << i << " ";
            }
            i = i + 1;
        } while (i <= N);
    } else {
        cout << "N khong hop le" << endl;
    }
    return 0;
}