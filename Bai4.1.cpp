#include <stdio.h>

void nhapMang(int a, int *n){
	do{
		printf ("Nhap n: ");
		scanf("%d", n);
	}while (*n <= 3 || *n > 40);
	
	int n;
	for (i = 0; i < *n; i++){
		printf ("Nhap a[%d]: ", i);
		scanf ("%d",(a + i));
	}
}

void inMang (int a, int *n){
	printf ("\nNhap phan tu trong mang a:");
	int i; 
	for(i = 0; i < n; i++){
		printf ("%d", *(a + i));
	}
}

int kiemTraViTri(int *a, int n){
	int i; 
	for(i=0; i<n; i++){
		if (i % 2 != 0 && *(a + i) < 0){
			return 0;
		}
	}
	return 1;
}

void thayTheBoi3(int *a, int n){
	int i; 
	for (i=0; i<n; i++){
		if (*(a+i) % 3 == 0){
			*(a+i)=5;
		}
	}
}

int main (){
	int a[45],n;
	int n;
	nhapMang (a, &n);
	inMang (a, n);
	if (kiemTraViTri(a,n)==1){
		printf ("\n Tat ca cac phan tu o vi tri le deu la so duong");
	}else{
		printf ("\n KHONG PHAI Tat ca cac phan o vi tri le deu la so duong");
	}
	thayTheBoi3(a, n);
	inMang (a, n);
	return 0;
}
