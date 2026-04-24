#include <stdio.h>

int main(){
	float c;
	printf("Nhap nhiet do C:");
	scanf ("%f", &c);
	
	float f = 9/5 * c + 32;
	
	printf("%.1f oC = %.1f oF", c, f);
	return 0;
}
