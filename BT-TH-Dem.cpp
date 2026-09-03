#include <iostream>
using namespace std;

int timsochandautien(int a[], int n, int &spss) {
    spss = 0;
    for (int i = 0; i < n; i++) {
        spss++;
        if (a[i] % 2 == 0) {
            return a[i];
        }
    }
    return 0;
}
int timsochancuoicung(int a[], int n, int &spss) {
    spss = 0;
    for (int i = n - 1; i >= 0; i--) {
        spss++;
        if (a[i] % 2 == 0) {
            return a[i];
        }
    }
    return 0;
}
int demsochan(int a[], int n,int &spg, int &spss) {
    int demsochan = 0;
    spg = 0;
    spss = 0;
    for (int i = 0; i < n; i++) {
        spss++;
        if (a[i] % 2 == 0) {
            demsochan++;
            spg++;
        }
    }
    return demsochan;
}
int timsochanlonnhat(int a[], int n,int &spg, int &spss) {
    spg = 0;
    spss = 0;
    int s = -1; spg++;
    for (int i = 0; i < n; i++) {
        spss++;
        if (a[i] % 2 == 0) {
            spss++;
            if (s == -1 || a[i] > s) {
                s = a[i];
                spg++;
            }
        }
    }
    return s;
}

int tim2sochanbangnhau(int a[], int n, int &spss) {
    spss = 0;
    for (int i = 0; i < n - 1; i++) {
        spss++;
        if (a[i] % 2 == 0) {
            for (int j = i + 1; j < n; j++) {
                spss++;
                if (a[j] % 2 == 0) {
                    spss++;
                    if (a[i] == a[j]) {
                        return 1; 
                    }
                }
            }
        }
    }
    return 0; 
}