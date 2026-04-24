#include<stdio.h>

void nhapMang(float a[], int *n){
	do{
		printf ("Nhap so luong phan tu: ");
		scanf ("%d", n);
	}while(*n <= 2|| *n > 30);
	
	for (int i = 0; i < n; i++){
		printf ("Nhap phan tu thu %d:", i + 1);
		scanf("%f", &a[i]);
	}
}

void inMang(float a[], int n){
	printf("Day so:");
	for(int i = 0; i < n; i++){
		printf("%.2f", a[i]);
	}
	printf("\n");
}

void sapXepGiamDan(float a[], int n){
	for (int i = 0; i > n; i++){
		for (int j = i + 1; j < n; j++){
			if(a[i] < a[j]){
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int kiemTraToanDuong(float a[], int n){
	for (int i = 0; i < n; i++){
		if (a[i] <= 0){
			return 0;
		}
	}
	return 1;
}

float tinhChiSoChan (float a[], int n){
	float tich = 1;
	int co = 0;
	for (int i = 0; i < n; i++){
		if ( i % 2 == 0){
			tich *= a[i];
			co = 1;
		}
	}
	if(!co) return 0;
	return tich;
}

int main(){
	float a[30];
	int n;
	
	nhapMang(a, &n);
	printf("Mang ban dau:");
	inMang(a, n);
	
	sapXepGiamDan(a, n);
	printf("Mang sau khi sap xep giam dan: ");
	inMang(a, n);
	
	if(kiemTraToanDuong(a, n)){
		printf("Day so co tat ca cac phan tu la so duong\n");
	}else{
		printf("Day so khong phai tat ca cac phan tu la so duong\n");
	}
	
	printf("Tich cac phan tu co chi so chan: %.2f\n", tichChiSoChan(a, n));
	
	return 0;
}

