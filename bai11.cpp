# include <stdio.h>

int main (){
	int a, b, c, d, n;
	printf ("Nhap so nguyen a, b, c, d");
	scanf ("%d %d %d %d",  &a, &b, &c, &d);
	
	for (n = 1000; n <= 9999; n++){
		
		a = n / 1000;
		b = n / 100 % 10;
		c = n / 10 % 10;
		d = n % 10;
		
		if (a * b * c * d == a + b + c + d){
			printf ("%d\n", n);
			
		}
		
	}
	return 0;
}
