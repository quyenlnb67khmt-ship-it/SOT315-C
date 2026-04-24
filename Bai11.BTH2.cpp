#include <stdio.h>

void xulyHaiSo (float a, float b, float *max, float *min, float *sum)
{
	*sum = a + b;
	*max = (a > b)?a:b;
	*min = (a < b)?a:b;
	}
int main(){
	float a,b;
	float max, min, sum;
	
	printf ("Nhap a,b: ");
	scanf ("%f %f", &a, &b);
	
	xulyHaiSo(a, b, &max, &min, &sum);
	
	printf ("Tong: %.2f\n", sum);
	printf ("Lon nhat: %.2f\n", max);
	printf ("Nho nhat: %.2f\n", min);
	
	return 0;
}

	
