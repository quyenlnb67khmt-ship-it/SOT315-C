#include <stdio.h>
#include <math.h>

void nhapMang(int a[],int *n){
	do{
		printf ("Nhap so luong phan tu:");
		scanf ("%d", n);
	}while (*n < 2 || *n > 30);
	
	for (int i = 0; i < *n; i++){
		printf ("Nhap phan tu thu %d: ", i + 1);
		scanf ("%d", &a[i]);
	}
}

void inMang(int a[], int n){
	printf ("Nhap day so: ");
	scanf ("%d", a[i]);
	for (int i = 0; i < n; i++){
		printf ("%d", a[i]);
	}
}

int timMin(int a[], int n){
	int min = a[0];
	for (int i; i < n; i++){
		if (a[i] < min){
			min = a[1];
		}
	}
	return min;
}

int demSoChan (int a[], int n){
	int  dem = 0;
	for (int i = 0; i < n; i++){
		if (a[i]%2==0){
			dem++;
		}
	}
	return dem;
}

int kiemTraSoChan (int a[], int n){
	for(int i = 0; i < n; i++){
		if (a[i] > a[i + 1]){
			return 0;
		}
	}
	return 1;
}

int laSoChinhPhuong (int x){
	int can = sqtr(x);
	return (can * can == x);
}

void inSoChinhPhuong(int a[], int n){
	printf ("Cac so chinh phuong:");
	int co = 0;
	for (int i = 0; i < n; i++){
		if (laSoChinhPhuong(a[i])){
			printf ("%d", a[i]);
			co =1;
		}
	}
	if (!co){
		printf ("Khong co");
	}
	printf ("\n");
}

int main(){
	int a[30], n;
	
	nhapMang(a, &n);
	inMang(a, n);
	
	printf ("Phan tu nho nhat: %d\n", timMin(a, n));
	printf ("So luong phan tu chan: %d\n", demSoChan(a, n));
	
	if (kiemTraSoChan(a, n)){
		printf ("Day so tang dan \n");
	}else{
		printf ("Day so giam dan \n");
	}
	
	inSoChinhPhuong(a, n);
	
	return 0;
}
