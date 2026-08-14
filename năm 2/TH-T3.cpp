#include <iostream>
using namespace std;
//Bài tập trên mảng 1 chiều. Viết hàm thực hiện các công việc sau, đếm số phép toán cơ bản đã sử dụng:
//1. Tìm số chẵn đầu tiên
//2. Tìm số chẵn cuối cùng
//3. Đếm số chẵn
//4. Tìm số chẵn lớn nhất
//5. Tìm hai số chẵn bằng nhau
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
    spg = 0; spg++;
    spss = 0; spg++;
    int s = -1; spg++;
    for (int i = 0; i < n; i++) {
        spss++;
        if (a[i] % 2 == 0) {
            s = a[i];
            spg++;
        }
    }
    return s;
}
int tim2sochanbangnhau (int a[], int n,int &spg, int &spss) {
    int sc1 = 0, sc2 = 0;
    int m = 0;
    spg += 3;
    for (int i = 0; i < n; i++) {
        spss++;
        if (a[i] % 2 == 0) {
            sc1 = a[i];
            m = i;
            spg++;
            break;
        }
    }
    for (int i = m + 1; i < n; i++) {
        spss++;
        if (a[i] % 2 == 0) {
            sc2 = a[i];
            spss++;
            break;
        }
    }
    spss++;
    if (sc1 == sc2)
        return 1;
    return 0;
}