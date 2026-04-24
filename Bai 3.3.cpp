#include <stdio.h>

void nhapMang (float a[], int *n){
	do {
		printf("Nhap so luong phan tu:");
		scanf ("%d", n);
	} while (*n <= 3|| *n >= 100);
	
	for (int i = 0; i < *n; i++){
		printf ("Nhap phan tu thu n:");
		scanf ("%f", &a[i]);
	}
}

void inMang(float a[], int n){
	printf ("Day so:");
	for (int i = 0; i < n; i++){
		printf ("%.2f", a[i]);
	}
	printf ("\n");l
}

float tinhTong (float a[], int n){
	float tong = 0; 
	for (int i = 0; i < n; i++){
		tong += a[i];
	}
	return tong;
}

float tinhTrungBinhCongDuong (float a[], int n){
	float tong = 0;
	int dem = 0;
	for (int i= 0; i < n; i++){
		if (a[i] > 0){
			tong += a[i];
			dem ++;
		}
	} 
	if (dem == 0);
	return tong / dem;
}

int main (){
	float a[100];
	int n;
	
	nhapMang(a, &n);
	inMang (a, n);
	
	float tong = tinhTong(a, n);
	printf ("Tong cac phan tu: %.2f\n", tong);
	
	float tbc = tinhTrungBinhCongDuong (a, n);
	if (tbc == 0){
		printf ("Khong co phan tu duong de tinh trung binh cong \n");
	}else{
		printf ("Trung binh cong cac phan tu duong: %.2f\n", tbc);
	}
	return 0;
}

	
