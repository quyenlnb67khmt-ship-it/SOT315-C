#include <stdio.h>

void tinhHCN (float d, float r, float *dienTich, float *chuVi) 
{
	*dienTich = d * r;
	*chuVi = (d + r)*2;
}
int main(){
	float dai, rong, dt, cv;
	
	printf ("Nhap chieu dai, chieu rong: ");
	scanf ("%f %f", &dai, &rong);
	
	tinhHCN (dai, rong, &dt, &cv);
	
	printf ("Dien tich: %.2f\n", dt);
	printf ("Chu vi: %.2f\n", cv);
	
	return 0;
	}
