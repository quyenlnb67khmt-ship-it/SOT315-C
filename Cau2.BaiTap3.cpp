#include<stdio.h>
#include<math.h>

int kiemTraDieuKien(int n){
	if(n >= 1 && n <= 15 && n % 2 != 0){
		printf("n dap ung dieu kien");
		return 1;
	} else {
		printf("Loi! n khong dap ung dieu kien");
		return 0;
	}
}

int tongLe(int a){
	int tong = 0;
	for(int i = 1; i <= a; i += 2){
		tong += i;
	}
	return tong;
}

long long tichChan(int b){
	long long tich = 1;
	for(int i = 2; i <= b; i += 2){
		tich *= i;
	}
	return tich;
}

double tinhS(int n){
	double S = 0.0;
	for(int i = 1; i <= n; i += 2){
		int tu = tongLe(i);
		long long mau = tichChan(i + 1);
		S += (double)tu / mau;
	}
	return S;
}
int main(){
	int n;
	do {
		printf("Nhap n(voi n la so le, 1<=n<=15): ");
		scanf("%d", &n);
		if (kiemTraDieuKien(n)){
			break;
		} else {
			printf("Vui long nhap lai! n phai trong khoang tu 1 den 15");
		}
	}while(1);
	
	double S = tinhS(n);
	printf("S = %.2lf\n", S);
	
	return 0;
}
