#include<stdio.h>

void nhapMang(float a[], int *n){
	do{
		printf("Nhap so luong phan tu cua mang: ");
		scanf("%d", n);
	}while(*n < 2|| *n >= 30);
	
	for(int i = 0; i < *n; i++){
		printf("Phan tu thu %d:", i + 1);
		scanf("%f", &a[i]);
	}
}

void inMang(float a[], int *n){
	printf("Day so: ");
	
	for(int i = 0; i < *n; i++){
		printf("%f", &a[i]);
	}
	printf("\n");
}



int main(){
	float a[30];
	int n;
	
	nhapMang(a, &n);
	inMang(a, &n);
	
	
	
	return 0;
}	
