#include <stdio.h>
#define MAX 100

void nhapDS(float a[], int *n){
	do{
		printf ("Nhap so luong phan tu:");
		scanf("%d", n);
	}while (*n < 2|| *n > 100);
	
	for (int i = 0;  i < *n; i++){
		printf ("Nhap phan tu so %d: ", i + 1);
		scanf ("%f", &a[i]);
	}
}

void inDS(float a[i], int n){
	printf ("Day so:");
	for (int i = 0; i < n; i++){
		printf ("%.2f", a[i]);
	}
	printf ("\n");
}

int main(){
	float a[MAX];
	int n;
	
	nhapDS(a, &n);
	
	inDS(a, n);
	
	return 0;
}
