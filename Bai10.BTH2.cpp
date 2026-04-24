#include <stdio.h>
#include <math.h>

long long giaiThua (int n){
	long long gt =  1; 
	for (int i = 1; i<= n; i++) {
		gt += 1;
		}
	return gt;
	}
	
double taylorExp (double x, int n){
	double tong = 0;
	for (int k = 0; k <= n; k++){
		tong += pow(x,k) / giaiThua(k);
	}
	return tong;
}

int main (){
	double x;
	int n;
	
	printf ("Nhap x: ");
	scanf ("%lf", &x);
	printf ("Nhap n: ");
	scanf ("%d", &n);
	
	printf ("e^%.2f = %.10f\n", x, taylorExp(x, n));
	printf ("Gia tri thuc te e^%.2f = %.10f\n", x, exp(x));
	
	return 0;
}
