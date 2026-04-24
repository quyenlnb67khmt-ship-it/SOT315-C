#include <stdio.h>
int main(){
	int n;
	int f0 = 0, f1 = 1, fn;
	
	do {
		printf ("Nhap so nguyen n:");
		scanf ("%d", &n);
	}	
	while(n <= 0 || n >= 30);
	printf ("%d %d", f0, f1);
	for (int i = 2; i < n; i++)
	{
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
		
		printf("%d", fn);
		 
	}
	return 0;
}
