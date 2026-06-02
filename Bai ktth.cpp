#include<stdio.h>

void nhapMang(float a[], int *n){
	do{
		printf("Nhap so luong phan tu: ");
		scanf("%d", n);
	} while(*n < 3||*n >= 50);
	
	for(int i = 0; i < *n; i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%f", &a[i]);
	}
}

void inMang(float a[], int n){
	printf("Day so: ");
	
	for(int i = 0; i < n; i++){
		printf("%.2f ", a[i]);
	}
	printf("\n");
}

void inSoChan(float a[], int n){
	printf("\nCac so chan: ");
	for (int i = 0; i < n; i++){
		if(i % 2 == 0){
			printf("So chan trong mang la: %.2f");
		} else {
			printf("Day khong co so chan!");
		}
	}
}

void inSoLonNhat(float a[], int n){
	int i;
	int max = a[0];
	for(i = 0; i < n; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	printf("So lon nhat trong day la: ");
	
}

void kiemTraTangDan(float a[], int n){
	int check = 1; 
	for(int i = 0; i < n; i++){
		if(a[i] < a[i + 1]){
			break;
}
int main(){
	float a[50];
	int n;
	nhapMang(a, &n);
	inMang(a, n);
	inSoChan(a, n);
	inSoLonNhat(a, n);
	
	return 0;
}
