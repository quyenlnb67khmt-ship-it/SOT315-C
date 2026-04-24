#include<stdio.h>

void nhapMang (float a[], int *n){
	do{
		printf ("Nhap so luong phan tu: ");
		scanf ("%d", n);
	} while(*n <= 3|| *n > 50);
	
	for (int i = 0; i < n; i++){
		printf ("Nhap phan tu thu%d:", i + 1);
		scanf ("%f", &a[i]);
	}
}

void inMang(float a[], int n){
	printf ("Nhap day so: ");
	for (int i = 0; i < n; i++){
		printf ("%.2f", a[i]);
	}
	printf ("\n");
}

void sapXeoTangDan(float a[], int n){
	for (int i = 0; i < n; i++){
		for (int j = i+1; j < n; j++){
			if (a[i] > a[j]){
				float temp = a[i];
				a[i] = a[j];
				a[j] = tamp;
			}
		}
	}
}

float tongDuongViTriLe(float a[], int n){
	float tong = 0;
	for (int i = 0; i < n; i++){
		if (a[i] > 0 && i % 2 == 0){
			tong +=  a[i];
		}
	}
	return tong;
}

int main(){
	float a[50];
	int n;
	
	nhapMang(a, &n);
	printf ("Mang ban dau:");
	inMang(a, n);
	
	sapXepTangDan(a, n);
	printf("Mang sau khi sap xep tang dan: ");
	inMang (a, n);
	
	printf ("Tong cac phan tu duong o vi tri le: %.2f\n", tongDuongViTriLe(a, n));
	
	return 0;
}
