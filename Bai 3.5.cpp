#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void taoDaySoNgauNhien(int a[], int n){
	srand (time(NULL));
	for (int i = 0; i < n; i++){
		a[i] = rand() % 100;
	}
}

void inDaySo(int a[], int n){
	printf ("Day so ngau nhien: ");
	for (int i = 0; i < n; i++){
		printf ("%d", a[i]);
	}
	printf("\n");
}

int timViTriDauTien(int a[], int n, int x){
	for (int i = 0; i < n; i++){
		if (a[i] == x){
			return i;
		}
	}
	return -1;
}

int main(){
	int n; 
	int a[30];
	
	do{
		printf ("Nhap so luong phan tu:");
		scanf ("%d", &soCanTim);
	}while(n <= 2 || n > 30);
	
	taoDaySoNgauNhien(a, n);
	inDaySo (a, n);
	
	int soCanTim;
	printf ("Nhap so can tim:");
	scanf ("%d", &soCanTim);
	
	int viTri = timViTriNgauNhien(a, n, soCanTim);
	if (viTri != -1){
		printf ("Tim thay %d tai vi tri %d\n", soCanTim, viTri);
	}else{
		printf ("Khong tim thay %d trong day so \n", soCanTim);
	}
	
	return 0;
}
