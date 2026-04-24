#include <stdio.h>

double tinhBieuThuc(int x, int n)
{
	double tong = 0.0;
	double luy_thua = 1.0;
	double mau_so = 0.0;
	
	for (int i = 1; i <= n; i++);
	{
		luy_thua *= x; 
		mau_so += i;
		
		double hang_tu = luy_thua / mau_so;
		
		if (i % 2 == 1)
		{
			tong -= hang_tu;
		} else{
			tong += hang_tu;
		}
	}
	return tong;
	
}

int main()
{
	int x, n;
	printf("Nhap x, n: ");
	scanf("%d %d", &x, &n);
	
	double kq = tinhBieuThuc(x, n);
	
	printf("Gia tri S(%d, %d) = %.6f\n", x, n, kq);
	
	return 0;
	
}
