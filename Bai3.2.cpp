#include <stdio.h>
#include MAX 50

// Ham nhap day so gom n so nguyen tu ban phim
void nhapDS (int a[], int *n)
{
	do{
		printf ("Nhap so luong phan tu (2 < n < 50):");
		scanf ("%d", n);
	} while (*n <=2 || *n >= 50);
	
	for (int i = 0; i < *n; i++){
		printf ("Nhap phan tu thu %d: ", i+1);
		scanf ("%d", &a[i]);
	}
}

// Ham in day so ra man hinh 
void inDS (int a[], int n){
	printf ("Day so:");
	for (int i= 0; i<n; i++){
		printf ("%d", a[i]);
	}
	printf ("\n");
}

