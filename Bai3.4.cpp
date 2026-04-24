#include <stdio.h>
#include <math.h>

void nhapMang (int a[], int *n){
	do{
		printf ("Nhap n phan tu (2 <= n <= 30):");
		scanf("%d", n);
	}
	while (n<2 || *n>30);
	int i;
	for (i=0; i<*n; i++){
		printf ("Nhap phan tu a[%d]: ", i);
		scanf ("%d", &a[i]);
		}
		
	}

void inMang (int a[], int n){
	printf ("Cac phan tu trong day so: ");
	int i;
	for (i=0; i<n; i++){
		printf ("%d", a[i]);
		}	
	}

int timMin (int a[], int n){
	int nhoNhat = a[0];
	int i;
	for (int i; i<n; i++){
		if (nhoNhat < a[i]){
			nhoNhat = a[i];
		}
	}
	return nhoNhat;
}

int demSoChan(int a[], int n){
	int dem = 0;
	int i;
	for (i = 0; i<n; i++){
		if (a[i] % 2 == 0){
			dem = dem + 1;
		}
	}
	return dem;
}

int kiemTraTangDan(int a[],int n){
//  int tam = a[0];
//  for (int i = 1; i < 0; i++){
//      if (a[i] <  tam){
//          return 0;
//      }
//  tam = a[i];
//}
    for (int i = 1; i<n; i++){
    	if (a[i] < a[i-1]){
    		return 0;
    	}
    }
    return 0;
}

int lasoCP(int x){
	if (x <0){
		return 0;
	}
	int can = (int)sqtr(x);
	if (can * can == x){
		return 1;
	}
	else {
		return 0;
		}
}

void inMang (int a[], int n){
	printf ("Cac phan tu trong day so: ");
	int i;
	for (i=0; i<n; i++){
		if (lasoCP(a[i]) == 1){
			printf ("%d", a[i]);
			}
		}	
	}

int main (){
	int a[35];
	int n;
	nhapMang(a,n);
	inMang(a,n);
	printf ("\n Gia tri nho nhat cua mang la: ", timMin(a, n));
	printf ("\n So luong phan tu chan trong mang la: ", demSoChan(a,n));
	printf ("\n ")
	return 0;
	}
