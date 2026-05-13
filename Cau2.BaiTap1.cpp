#include<stdio.h>
#include<math.h>

int kiemTraDieuKien(int n){
	if(n >= 3 && n <= 15){
		printf("n da dap ung dieu kien\n");
		return 1;
	} else {
		printf("Loi! n khong dap ung dieu kien\n");
	}
	return 0; 
}
double tinhS(int n){
	double S = 0.0;
	double tongCan = 0.0;
	for(int i = 1; i <= n; i++){
		tongCan += sqrt(i);
		S += (2.0 * i)/tongCan;
	}
	return S;
}

int main(){
	int n;
	do{
		printf("Nhap n (3 < n < 15):");
		scanf("%d", &n);
		if(kiemTraDieuKien(n)){
			break;
		} else {
			printf("Vui long nhap lai!n phai trong khoang 3 den 15: \n");
		}
	}while(1);
	
	double ketQua = tinhS(n);
	printf("S = %.2lf\n", ketQua);
	
	return 0;
}
