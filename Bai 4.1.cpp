#include<stdio.h>
#include<stdlib.h>

void nhapMang(float a[], int *n){
	do{
		printf("Nhap so luong phan tu: ");
		scanf("%d", n);
	}while(*n < 3 || *n >= 40);
	
	for(int i = 0; i < *n; i++){
		printf ("Nhap phan tu thu %d:", i + 1);
		scanf("%f", &a[i]);
	}
}

void inMang(float a[], int n){
	printf ("Day so: ");
	
	for(int i = 0; i < n; i++){
		printf("%f", a[i]);
	}
	printf("\n");
}

int kiemTraViTriLe(float a[], int n){
	for (int i = 1; i < n; i+=2){
		if(a[i] != (int)a[i] || a[i] <= 0){
			return 0;
		}
	}
	return 1;
}

void thayBoi3(float a[], int n){
	for(int i =0; i < n; i++){
		if((int)a[i] % 3 == 0 && a[i] == (int)a[i]){
			a[i] = 5;
		}
	}
}

int main(){
	float a[30];
	int n;
	
	nhapMang(a, &n);
	printf("Mang ban dau:");
	inMang(a, n);
	
	if(kiemTraViTriLe(a, n)){
		printf("Tat ca cac phan tu o vi tri deu la so nguyen duong\n");
	}else{
		printf("Khong phai tat ca cac phan tu o vi tri le deu la so nguyen duong\n");
	}
	
	thayBoi3(a, n);
	printf("Mang sau khi thay the cac boi cua 3 bang 5:");
	inMang(a, n);
	
	return 0;
}

