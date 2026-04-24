# include <stdio.h>

int tinhTong (int a, int b, int n)
{
	int tong = 0;
	for  (int i = 1; i < n; i++){
		if (i % a == 0 && i % b != 0){
			tong += i ;
			}
		}
	return tong;
	}

int main (){
	int a, b, n;
	
	printf ("Nhap a, b, n (0 < a, b < n): ");
	scanf ("%d %d %d", &a, &b, &n);
	if (a <= 0 || b <= 0 || a >= n || b >= n){
		printf ("Du lieu khong hop le! Vui long nhap lai(0 < a, b < n): ");
		return 1;
	}
	
	int kq = tinhTong (a, b, n);
	printf ("Tong cac so < %d chia het cho %d nhung khong chia het cho %d la: %d\n", n - 1, a, b, kq);
	
	return 0;
}
