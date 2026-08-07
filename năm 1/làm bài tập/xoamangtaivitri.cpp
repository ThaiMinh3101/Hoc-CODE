#include <iostream>
using namespace std;
void xoamangtaivitri(int a[], int &N) // truyền tham chiếu cho N để có thể giảm N sau khi xoá phần tử
{
    //mảng [1 2 3 4 5]
    // xoa so 3
    //mảng [1 2 4 5]
    int X;
    cout << "nhap vi tri X can xoa: ";
    cin >> X;
    for (int i = X; i < N - 1; i++) // cho N-1 vì phần tử cuối cùng sẽ bị xoá nên không cần gán giá trị cho nó
    {
        a[i] = a[i + 1];
    }
    N--; // giảm N số nguyên cần dùng sau khi xoá
}