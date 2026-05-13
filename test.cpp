#include<stdio.h>

void nhapMang(float a[], int *n){
	do{
		printf("Nhap so luong phan tu: ");
		scanf("%d", n);
	} while (*n < 3||*n > 20);
	
	for(int i = 0; i < *n; i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%f", &a[i]);
	}
}

void inMang(float a[], int n){
	printf("Day so: ");
	
	for(int i = 0; i < n; i++){
		printf("%.0f ", a[i]);
	}
	printf("\n");
}

int main(){
	float a[30];
	int n;
	
	nhapMang(a, &n);
	inMang(a, n);
	return 0;
	
}
