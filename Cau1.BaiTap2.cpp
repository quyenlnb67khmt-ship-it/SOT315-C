#include<stdio.h>
#include<math.h>

int kiemTraTamGiac(double a, double b, double c){
	if (a+b>c && a+c>b && b+c>a){
		printf("Ba canh tao thanh tam giac!");
		return 1;
	} else {
		printf("Ba canh khong tao thanh tam giac!");
		return 0;
	}
}

void phanLoaiTamGiac(double a, double b, double c){
	if(a == b == c){
		printf("Day la tam giac deu\n");
	} else if (a == b || a == c || b == c){
		printf("Day la tam giac can\n");
	} else if (fabs(a*a + b*b - c*c) < 1e-9 ||fabs(a*a + c*c - b*b) < 1e-9 || fabs(b*b + c*c - a*a) < 1e-9){
		printf("Day la tam giac vuong!\n");
	} else if (a==b && fabs(a*a + b*b - c*c) < 1e-9 ||a==c && fabs(a*a + c*c - b*b) < 1e-9 || fabs(b*b + c*c - a*a) < 1e-9) {
		printf("Day la tam giac vuong can!\n");
	} else {
		printf("Day la tam giac thuong!\n");
	}
}

double tinhDienTich(double a, double b, double c){
	double p = (a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main(){
	double a, b, c;
	printf("Nhap ba canh a, b, c: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if(kiemTraTamGiac(a, b, c)){
		phanLoaiTamGiac(a, b, c);
		printf("Dien tich = %.2lf\n", tinhDienTich(a, b, c));
	} else {
		printf("Vui long nhap lai ba canh!\n");
	}
	return 0;
}
