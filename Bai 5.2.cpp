#include<stdio.h>
#define MAX 10

void nhapMT(int a[MAX][MAX], int *m, int *n){
	printf("Nhap m, n: ");
	scanf("%d %d", m, n);
	for(int i = 0; i < *m; i++){
		for(int j = 0; j < *n; j++){
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void inMT(int a[MAX][MAX], int m, int n){
	printf("Ma tran vua nhap la: \n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n;  j++){
			printf("%d ", a[i][j]);
		} 
	printf("\n");
	}
}

int demGiaTriX(int a[MAX][MAX], int m, int n, int x){
	int count = 0; 
	for (int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(a[i][j] == x) count++;
		}
	}
	return count;
}

void hoanDoiHang(int a[MAX][MAX], int m, int n)
{
	int i1, i2;
	printf("Nhap 2 hang can hoan doi i1, i2: ");
	scanf("%d %d", &i1, &i2);
	
	if(i1 >= 0 && i1 < m && i2 >= 0 && i2 < m){
		for(int j = 0; j < n; j++){
			int temp = a[i1][j];
			a[i1][j] = a[i1][j];
			a[i2][j] = temp;
		}
		printf("Da hoan doi hang %d va hang %d\n", i1, i2);
	} else {
		printf("LOI: chi so hang khong hop le! \n");
	}
}

void tongTungHang(int a[MAX][MAX], int m, int n){
	for(int i = 0; i < m; i++){
		float tong = 0;
		for(int j = 0; j < n; j++){
			tong += a[i][j];
		}
		printf("Hang %d: %.2f\n", i, tong);
	}
}

int main(){
	int m, n, a[MAX][MAX];
	nhapMT(a, &m, &n);
	inMT(a, m, n);
	
	int x; 
	printf("\n Nhap x can dem:");
	scanf("%d", &x);
	printf("So lan xuat hien cua %d: %d\n", x, demGiaTriX(a, m, n, x));
	
	hoanDoiHang(a, m, n);
	printf("Ma tran sau khi hoan doi hang: \n");
	inMT(a, m, n);
	
	printf("Tong tung hang: \n");
	tongTungHang(a, m, n);
	
	return 0;
}
