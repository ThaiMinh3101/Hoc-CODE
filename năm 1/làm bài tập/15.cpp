using namespace std;
#include<iostream>
int main()
{
    int s, i = 0;
    cin>>s;
    while (s > 0)
    {
        i += s % 10;
        s = s / 10;
    }
    cout << i;
    return 0;
}