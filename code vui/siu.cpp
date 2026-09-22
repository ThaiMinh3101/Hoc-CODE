#include <iostream>
using namespace std;
int main() 
{
	for (;;)
	{
		cout << "---------- tong hop code trong de ----------\n";
		cout << "1.viet chuong trinh tinh tien.\n";
		cout << "2.nhap diem quy doi sang abcdf.\n";
		cout << "3.kiem tra 3 chu so va cac bien the.\n";
		cout << "4.nhap nam sinh va xuat theo yeu cau.\n";
		cout << "5.dem so le,chantrong 1 day so.\n";
		cout << "6.xuat ra hoc luc.\n";
		cout << "7.in ra cac so kem chu.\n";
		cout << "8.viet chuong trinh lien tuc,tong so duong am.\n";
		cout << "9.tao menu\n";
		cout << "10.nhap n so nguyen, in ra/tinh tong/dem so ngto/hoan thien trong n da nhap.\n";
		cout << "nhap muc ma ban muon nhap,nhap 0 de out:";
		 int n; cin >> n;
		 if (n == 0)
		 {
			 cout << "ket thuc chuong trinh.";
			 break;
		 }
		 switch (n)
		 {
		 case 1:
		 {
			 int x;
			 float h, g, j;

			 while (true)
			 {
				 cout << "\n---------- 1 ---------- \n";
				 for (;;)
				 {
					 cout << "nhap so luong san pham:";
					 cin >> x;
					 if (x <= 0)cout << "nhap sai,nhap lai.\n";
					 else break;
				 }
				 int a = 5;
				 h = a * x;
				 if (x >= 50) g = h * 0.15;
				 else if (x >= 30) g = h * 0.10;
				 else g = 0;
				 j = h - g;
				 cout << "so tien phai tra la:" << j << endl;
				 char k;
				 cout << "co muon tiep tuc? [y/n]";
				 cin >> k;
				 if (k == 'y') { continue; }
				 else
				 {
					 cout << "ket thuc \n";
					 break;
				 }
			 } cout << "=========================================================\n"; break;
		 }
		 case 2:
		 {
			 float x;
			 for (;;)
			 {
				 cout << "\n---------- 2 ---------- \n";
				 while (true)
				 {
					 cout << "nhap diem:";
					 cin >> x;
					 if (x <= 0) cout << "nhap sai ,nhap lai.";
					 else break;
				 }
				 if (x <= 3.9 && x >= 0) cout << "F\n";
				 else if (x <= 5.4) cout << "D\n";
				 else if (x <= 6.9) cout << "C\n";
				 else if (x <= 8.4)cout << "B\n";
				 else if (x <= 10)cout << "A\n";
				 char k;
				 cout << "co muon tiep tuc? [y/n]";
				 cin >> k;
				 if (k == 'y') continue;
				 else if (k == 'n')
				 {
					 cout << "ket thuc\n";
					 break;
				 }
			 } cout << "=========================================================\n"; break;
		 }
		 case 3:
		 {
			 for (;;)
			 {
				 int x;
				 for (;;)
				 {
					 cout << "\n---------- 3 ----------\n";
					 cout << "nhap so nguyen co 3 chu so:";
					 cin >> x;
					 if (x < 99 && x>1000) cout << "nhap sai nhap lai.";
					 else break;
					 return 0;
				 }
				 if (x % 2 == 0) cout << x << " la so chan.\n";
				 int a, b, c;
				 a = x / 100;
				 c = x % 10;
				 b = x / 10 % 10;
				 if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0) cout << x << " co so chan trong so da nhap.\n";
				 if (a % 2 == 0 && b % 2 == 0 && c % 2 == 0) cout << x << " toan so chan.\n";
				 if (a % c == 0) cout << x << " la so ganh.\n";
				 cout << "tong cac so la:" << a + b + c << endl;
				 char k;
				 cout << "co muon tiep tuc? [y/n]";
				 cin >> k;
				 if (k == 'y') continue;
				 else if (k == 'n')
				 {
					 cout << "ket thuc \n";
					 break;
				 }
			 } cout << "=========================================================\n"; break;

		 }
		 case 4:
		 {
			 for (;;)
			 {
				 cout << "\n---------- 4 ----------\n";
				 int x;
				 for (;;)
				 {
					 cout << "nhap nam sinh:";
					 cin >> x;
					 if (x < 1900 && x>2021) cout << "nhap sai nhap lai.";
					 else break;
				 }
				 int l = 2026 - x;
				 cout << " tuoi cua ban la:" << l << endl;
				 if (l >= 0 && l <= 17) cout << "tre em.\n";
				 else if (l <= 40) cout << "thanh nien\n";
				 else if (l <= 60) cout << "trung nien\n";
				 else if (l >= 61) cout << "nghi huu.\n";
				 char k;
				 cout << "co muon tiep tuc? [y/n]";
				 cin >> k;
				 if (k == 'y') { continue; }
				 else if (k == 'n')
				 {
					 cout << "ket thuc\n";
					 break;
				 }
			 } cout << "=========================================================\n"; break;
		 }
		 case 5:
		 {
			 for (;;)
			 {
				 cout << "\n---------- 5 ----------\n";
				 int x;
				 for (;;)
				 {
					 cout << "nhap so nguyen duong:";
					 cin >> x;
					 if (x <= 0) cout << "nhap sai nhap lai.";
					 else break;

				 }
				 cout << "so chan co trong 1 - " << x << " la:";
				 for (int i = 1; i <= x; i++)
					 if (i % 2 == 0) cout << i << " ";
				 cout << endl;
				 cout << "so le co trong 1 - " << x << " la:";
				 for (int i = 1; i <= x; i++)
					 if (i % 2 != 0) cout << i << " ";
				 char k;
				 cout << "co muon tiep tuc? [y/n]";
				 cin >> k;
				 if (k == 'y') continue;
				 else if (k == 'n')
				 {
					 cout << "ket thuc \n"; break;
				 }
			 }
			 cout << "=========================================================\n";break;
		 }
		 case 6:
		 {
			 float x;
			 int yeu = 0, gioi = 0, tb = 0;
			 for (;;)
			 {
				 cout << "\n---------- 6 ----------\n";
				 cout << "nhap 11 de dung!\n";
				 for (int i=1;;i++)
				 {
					 cout << " nhap diem sinh vien [" << i << "]:";
					 cin >> x;
					 if (x < 5 && x >= 0) yeu++;
					 else if (x < 8) tb++;
					 else if (x >= 8 && x <= 10) gioi++;
					 if (x == 11) break;
				 }
				 cout << "======== tong ket ======\n";
				 cout << "gioi:" << gioi << endl;
				 cout << "tb-kha:" << tb << endl;
				 cout << "yeu:" << yeu << endl;
				 char k;
				 cout << "co muon tiep tuc? [y/n]";
				 cin >> k;
				 if (k == 'y') continue;
				 else if (k == 'n')
				 {
					 cout << "ket thuc\n"; break;
				 }
			 } cout << "=========================================================\n"; break;
		 }
		 case 7:
		 {
			 int x;
			 for (;;)
			 {
				 cout << "\n---------- 7 ----------\n";
				 for (;;)
				 {
					 cout << "nhap so nguyen duong:";
					 cin >> x;
					 if (x <= 0)cout << "nhap sai,nhap lai.";
					 else break;
				 }
				 for (int i = 1; i <= x; i++)
				 {
					 if (i % 2 == 0 && i % 3 == 0) cout << " [both] ";
					 else if (i % 3 == 0) cout << " [three] ";
					 else if (i % 2 == 0) cout << " [even] ";
					 else cout << " " << i << " ";
				 }
				 cout << endl;
				 char k;
				 cout << "co muon tiep tuc? [y/n]";
				 cin >> k;
				 if (k == 'y') continue;
				 else if (k == 'n')
				 {
					 cout << "ket thuc\n"; break;
				 }
			 } cout << "=========================================================\n"; break;
		 }
		 case 8:
		 {
			 int x;
			 for (;;)
			 {
				 cout << "nhap 0 de dung!";
				 int am = 0, duong = 0;
				 cout << "\n---------- 8 ----------\n";
				 for (int i = 1;; i++)
				 {
					 cout << "nhap vao so nguyen [" << i << "]:";
					 cin >> x;
					 if (x < 0)am++;
					 else if (x > 0) duong++;
					 if (x == 0)break;
				 }
				 cout << "====== tong ket ======\n";
				 cout << "am:" << am << endl;
				 cout << "duong:" << duong << endl;
				 char k;
				 cout << "co muon tiep tuc? [y/n]";
				 cin >> k;
				 if (k == 'y') continue;
				 else if (k == 'n')
				 {
					 cout << "ket thuc\n"; break;
				 }

			 }
			 cout << "=========================================================\n"; break;
		 }
		 case 9:
		 {
			 int x, n;
			 for (;;)
			 {
				 cout << "\n---------- 9 ----------\n";
				 cout << "==== menu ====\n";
				 cout << "1.tinh tong cac so chia het cho 3 trong khoang 1-n.\n";
				 cout << "2.tim so lon nhat trong n so nhap vao.\n";
				 cout << "3. dem so hoang hao trong 1-n.\n";
				 cout << "0.thoat.\n";
				 cout << "nhap muc muon chon:";
				 cin >> x;
				 if (x == 1)
				 {
					 int c = 0;
					 for (;;)
					 {
						 cout << "nhap n:";
						 cin >> n;
						 if (n <= 0) cout << "nhap sai,nhap lai.\n";
						 else break;
					 }
					 for (int i = 1; i <= n; i++)
						 if (i % 3 == 0) c += i;
					 cout << "tong cac so chia het cho 3:" << c;
				 }
				 else if (x == 2)
				 {
					 int c ;
					 int max = 0;
					 cout << "nhap 0 de thoat!\n";
					 for (int i=1;;i++)
					 {
						 cout << "nhap c thu [" << i << "]:";
						 cin >> c;
						 if (max < c )max = c ;
						 if (c == 0)break;
					 }
					 cout << "so lon nhat da nhap la:" << max << endl;
						
				 }
				 else if (x == 3)
				 {
					 int a;
					 for (;;)
					 {
						 cout << "nhap a:";
						 cin >> a;
						 if (a <= 0) cout << "nhap lai.";
						 else break;
					 }
					 int k=0;
					 for (int i = 1; i <a; i++)
					 if (a % i == 0) k += i;
					 if (k == a)cout << a << " la so hoan thien.\n";
					 else cout << a << " la so khong hoan thien.\n";
				 }
				 else if (x == 0)break;
				 else cout << "nhap sai,nhap lai.\n";
			 }
			 cout << "ket thuc chuong trinh.\n";
			 cout << "=========================================================\n";
			 break;
		 }
		 case 10:
		 {
			 for (;;)
			 {
				 cout << "nhap 1 de thoat.\n";
				 int b,m;
				 cout << "---------- 10 ----------\n";
				 for (;;)
				 {
					 cout << "nhap vao so nguyen duong b:";
					 cin >> b;
					 if (b <= 0) cout << "nhap lai.";
					 else break;
				 } if (b == 1)break;
				 int p = 0,q=0,r=0,w=0,ha=0;
				 for (int i = 1; i <= b; i++)
				 {
					 cout << "nhap so n [" << i << "]:";
					 cin >> m;
					 p += m;
					 for (int j = i;j<=m; j++)//tinh so nguyen to
					 {
						 if (m % j == 0) q ++;
					} 
					 if (q == 2) { cout << m << " la so nguyen to.\n"; r++; }
					 else cout << m << " khong phai so nguyen to.\n";
					 for (int f = 1; f < m; f++)
					 {
						 if (m % f == 0)w+=f;
					 }
					 if (w == m)
					 {
						 cout << m << " la so hoan thien.\n";
						 ha++;
					 }
					 else cout << m << " khong phai la so hoan thien.\n";
				 }
				 cout << "tong cac so da nhap la:" << p << endl;
				 cout << "co cac so nguyen to la:" << r << endl;
				 cout << "co cac so hoan thien da nhap la:" << ha << endl; 
			 } cout << "=========================================================\n"; break;
		 }
		 } 
	}
	cout << "ket thuc chuong trinh.";
	return 0;
}