#include <iostream>
using namespace std;
int main() {
    int i, tram, chuc, donvi, tong;
    i = 100;
    do {
        donvi = i % 10;
        chuc = (i / 10) % 10;
        tram = i / 100;
        tong = (tram * tram) + (chuc * chuc) + (donvi * donvi);
        if (tong == 25) {
            cout << i << " ";
        }   
        i = i + 1;
    } while (i <= 999);
    return 0;
}