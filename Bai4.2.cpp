#include <stdio.h>

void nhapMang (float a[], int *n){
	do{
		printf ("Nhap n:");
		scanf ("%d", n);
	}while (*n <= 2 || *n > 30);

	int i;
	for (i = 0; i < *n; i++){
		printf ("Nhap phan tu thu %d:");
		scanf ("%f", &a[i]);
	}

}

void inMang (float a[], int *n){
	int i; 
	printf ("Phan tu  trong mang: ");
	for (i = 0; i < *n; i++){
		printf ("%d", a[i]);
	}
}

void themPhanTu(float a[], int *n, float x, int k){
	if (k < 0 || k >= *n){
		printf ("\nVi tri them khong hop le!");
		return;
	}
	
	int i;
	for (i = *n; i > k; i--){
		a[i]= a[i - 1];
	}
	
	a[k] = x;
	(*n)++;
}

void xoaPhanTu(float a[], int *n, int p){
	if (p < 0 || p >= *n){
		printf ("\n Vi tri xoa khong hop le!");
		return;
	}
	int i; 
	for (i = p; i < *n - 1; i++){
		a[i]= a[i+1];
	}
	
	(*n)--;
	
}

void xoaPhanTuGiaTri (float a[], int *n, float x){
	int check = 0;
	int i; 
	for (i = 0; i < *n; i++){
		if (a[i]==x){
			xoaPhanTu (a, n, i);
			check = 1;
			break;
		}
	}
	if (check == 0){
		printf ("Khong tim thay phan tu %f trong mang", x);
	}
}

int main (){
	float a[50];
	int n;
	nhapMang (a, &n);
	inMang (a, n);
	
	float x;
	int k;
	printf ("Nhap gia tri x can them: ");
	scanf ("%d", &x);
	printf ("Nhap gia tri k can them: ");
	scanf  ("%d", &k)
	themPhanTu(a, &n, x, k);
	inMang (a, n);
	
	int p;
	printf ("Nhap vi tri p can xoa: ");
	scanf ("%d", &p);
	xoaPhanTu(a, &n, p);
	inMang (a, n);
	
	float x_xoa;
	printf ("Nhap gia tri x cam tim va xoa: ");
	xoaPhanTuGiaTri(a, &n, x_xoa);
	inMang(a, n);
	
	return 0;
}
