#include <stdio.h>

int main()
{
	float can_nang, chieu_cao;
	printf ("Nhap  chieu cao va can nang: ");
	scanf ("%f %f", &can_nang, &chieu_cao);
	
	float BMI = (can_nang)/(chieu_cao*chieu_cao);
	
	printf ("BMI = %.1f\n", BMI);
	
	if (BMI < 18.5){
		printf ("Gay");
	}
	if(18.5 <= BMI && BMI < 25){
		printf ("Binh thuong");
	}
	if (25 <= BMI && BMI < 30){
		printf ("Thua can");
	}
	else{
		printf ("Beo phi");
	}
	return 0;
	
	}
