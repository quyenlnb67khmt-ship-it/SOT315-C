#include <stdio.h>
#include <math.h>
int TamGiac (double a, double b, double c){
	if (a <= 0 || b <= 0|| c <= 0){
		return 0;
		}
	if (a + b > c && a + c > b && b + c > a){
		return 1;
	}
	return 0;
}
double TinhDienTich (double a, double b, double c){
	double p = (a + b + c) / 2;
	double  DienTich = sqrt(p * (p-a) * (p-b) * (p-c));
	return DienTich;
}

int main(){
	double a,b,c;
	
	printf("Nhap do dai ba canh tam giac: ");
	scanf ("%lf %lf %lf", &a, &b, &c);
	if (TamGiac(a,b,c)){
		double DienTich = TinhDienTich(a,b,c);
		printf ("\nBa so %.2lf, %.2lf, %.2lf la do dai 3 canh cua mot tam giac\n", a, b, c);
		printf ("Dien tich tam giacla: %.2lf\n", DienTich);
		} else {
			printf("\nLOI: Ba so %.2lf, %.2lf, %.2lf khong phai la ba canh cua mot tam giac!\n", a, b, c);
			}
			return 0;
			}
		
	

