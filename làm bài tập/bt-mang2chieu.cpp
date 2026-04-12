#include <iostream>
using namespace std;

bool laSoNguyenTo(int num) {
    if (num < 2) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i * i <= num; i = i + 2) {
        if (num % i == 0) return false;
    }
    return true;
}

void timGiaTriAmLonNhat() {
    cout << "\n1. Gia tri am lon nhat: ";
    int maxAm = -999999;
    int coAm = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] < 0 && a[i][j] > maxAm) {
                maxAm = a[i][j];
                coAm = 1;
            }
        }
    }
    
    if (coAm == 1) {
        cout << maxAm << endl;
    } else {
        cout << "Khong co gia tri am" << endl;
    }
}

void timViTriGiaTriNhoNhat() {
    cout << "\n2. Vi tri cua gia tri nho nhat: ";
    int minValue = a[0][0];
    int minRow = 0, minCol = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] < minValue) {
                minValue = a[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }
    
    cout << "a[" << minRow << "][" << minCol << "] = " << minValue << endl;
}

void tinhTongCotLe() {
    cout << "\n3. Tong cac phan tu tren cac cot le: ";
    long long tong = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < m; j = j + 2) {
            tong = tong + a[i][j];
        }
    }
    
    cout << tong << endl;
}

void tinhTrungBinhPhanTuChan() {
    cout << "\n4. Trung binh cac phan tu chan: ";
    long long tong = 0;
    int dem = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] % 2 == 0) {
                tong = tong + a[i][j];
                dem++;
            }
        }
    }
    
    if (dem > 0) {
        double trungBinh = (double)tong / dem;
        cout << trungBinh << endl;
    } else {
        cout << "Khong co phan tu chan" << endl;
    }
}

void tinhTongTungDong() {
    cout << "\n5. Tong tung dong:\n";
    
    for (int i = 0; i < n; i++) {
        long long tong = 0;
        for (int j = 0; j < m; j++) {
            tong = tong + a[i][j];
        }
        cout << "Dong " << i << ": " << tong << endl;
    }
}

void timCotTrungBinhLonNhat() {
    cout << "\n6. Cot co gia tri trung binh lon nhat: ";
    double maxTrungBinh = -999999;
    int cotMax = 0;
    
    for (int j = 0; j < m; j++) {
        long long tong = 0;
        for (int i = 0; i < n; i++) {
            tong = tong + a[i][j];
        }
        double trungBinh = (double)tong / n;
        if (trungBinh > maxTrungBinh) {
            maxTrungBinh = trungBinh;
            cotMax = j;
        }
    }
    
    cout << "Cot " << cotMax << " (trung binh = " << maxTrungBinh << ")" << endl;
}

void tinhTrungBinhPhanTuNhoNhat() {
    cout << "\n7. Trung binh cac phan tu nho nhat tren moi cot:\n";
    long long tongMin = 0;
    
    for (int j = 0; j < m; j++) {
        int minCot = a[0][j];
        for (int i = 0; i < n; i++) {
            if (a[i][j] < minCot) {
                minCot = a[i][j];
            }
        }
        cout << "Cot " << j << ": phan tu nho nhat = " << minCot << endl;
        tongMin = tongMin + minCot;
    }
    
    double trungBinh = (double)tongMin / m;
    cout << "Trung binh: " << trungBinh << endl;
}

void inSoNguyenToTrenDuongCheo() {
    cout << "\n8. Cac so nguyen to tren 2 duong cheo:\n";
    
    int minSize = n;
    if (m < minSize) minSize = m;
    
    cout << "Duong cheo chinh: ";
    int dem1 = 0;
    for (int i = 0; i < minSize; i++) {
        if (laSoNguyenTo(a[i][i])) {
            cout << a[i][i] << " ";
            dem1++;
        }
    }
    if (dem1 == 0) cout << "Khong co";
    cout << endl;
    
    cout << "Duong cheo phu: ";
    int dem2 = 0;
    for (int i = 0; i < minSize; i++) {
        if (laSoNguyenTo(a[i][minSize - 1 - i])) {
            cout << a[i][minSize - 1 - i] << " ";
            dem2++;
        }
    }
    if (dem2 == 0) cout << "Khong co";
    cout << endl;
}

int main() {
	/*n la hang, m la cot*/
	int n, m;
	int a[50][100];
    cout << "Nhap lan luot n, m: ";
    cin >> n >> m;
    
    cout << "Nhap cac phan tu ma tran:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    
    cout << "\n========== KET QUA ==========";
    
    timGiaTriAmLonNhat();
    timViTriGiaTriNhoNhat();
    tinhTongCotLe();
    tinhTrungBinhPhanTuChan();
    tinhTongTungDong();
    timCotTrungBinhLonNhat();
    tinhTrungBinhPhanTuNhoNhat();
    inSoNguyenToTrenDuongCheo();
    
    return 0;
}
