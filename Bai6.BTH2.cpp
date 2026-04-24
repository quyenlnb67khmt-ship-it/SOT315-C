#include <stdio.h>

int main(){
	float a = 7.5;
	float *p;
	p = &a;
	
	printf ("Gia tri cua a (qua bien): %.2f\n", a);
	printf ("Gia tri cua a (qua con tro): %.2f\n", *p);
	printf ("Dia chi cua a (qua con tro): %.2f\n", p);
	
	*p = 99.9;
	
	printf ("Gia tri moi cua a: %.2f\n", a);
	
	return 0;
	
}
