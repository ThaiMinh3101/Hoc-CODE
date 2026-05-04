#include <iostream>
using namespace std;
int main() {
    char s[50];
    cout << "nhap chuoi: ";
    gets(s);
    int n = strlen(s);
    /*câu 1*/
    for (int i = 0; i < n; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i]=s[i] - 32;
        }
    }
    cout << "chuoi da upper la: ";
    puts(s);
    /*câu 2*/
    for (int i = 0; i < n; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i]=s[i] + 32;
        }
    }
    cout << "chuoi da lower la: ";
    puts(s);
}
/*câu 1 upper if a>z */ 
/*câu 2 lower  */ 
/*câu 3 standard*/