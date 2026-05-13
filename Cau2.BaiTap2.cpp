#include<stdio.h>
#include<math.h>

int kiemTraDieuKien(int n){
	if(n >= 3 && n <= 15 && n % 2 != 0){
		printf("n da dap ung dieu kien\n");
		return 1;
	} else {
		printf("Loi! n khong dap ung dieu kien!\n");
		return 0;
	}
}

double tinhS(int n){
	double S = 0.0;
	int m = (n + 1)/2;
	for(int i = 1; i <= m; i++){
		S += (double)i / 2.0;
	}
	return S;
}

int main(){
	int n;
	do{
		printf("Nhap n (3<=n<=15): ");
		scanf("%d", &n);
		if(kiemTraDieuKien(n)){
			break;
		} else {
			printf("Vui long nhap lai! n phai la so le trong khoang tu 3 den 15!");
		}
	}while(1);
	
	double S = tinhS(n);
	printf("S = %.2lf\n", S);
	return 0;
}

