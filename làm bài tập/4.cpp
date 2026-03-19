using namespace std;
#include <iostream>
int main()
{
    int i = 10, s = 0;
    while (s<20)
    {
        s = s + i;
        i = i - 2;
    }
    cout << s;
    return 0;
}