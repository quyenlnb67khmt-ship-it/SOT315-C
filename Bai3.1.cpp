#include <stdio.h>

// Ham in day so ra man hinh 
void inDayso(int a[], int n){
	printf ("Day so:");
	for (int i=0; i < n; i++){
		printf ("%d", a[i]);
		}
	printf ("\n");
}

int main()
{
	int a[] = {5, 7, 9, 11, 24, 10};
	int n = sizeof(a)/sizeof(a[0]);
	// Goi ham in day so ra man hinh
	inDayso (a,n);
	
	return 0;
}
