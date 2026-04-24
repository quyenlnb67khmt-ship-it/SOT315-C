#include<stdio.h>
#define MAX 10

void nhapMT(int a[MAX][MAX], int *m, int *n){
	printf("Nhap m, n:");
	scanf("%d %d", m, n);
	for(int i = 0; i < *m; i++){
		for(int j = 0; j < *n; j++){
			printf("a[%d][%d] =", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void inMT(int a[MAX][MAX], int m, int n){
	printf("Ma tran vua nhap:\n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}	

int tinhTong(int a[MAX][MAX], int m, int n){
	int tong = 0; 
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			tong += a[i][j];
		}
	}
	return tong;
}

int giaTriLonNhat(int a[MAX][MAX], int m, int n){
	int max = a[0][0];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(a[i][j] > max) max = a[i][j];
		}
	}
	return max;
}

int main(){
	int m, n, a[MAX][MAX];
	nhapMT(a, &m, &n);
	inMT(a, m, n);
	printf("Tong cac phan tu: %d\n", tinhTong(a, m, n));
	printf("Phan tu lon nhat: %d\n", giaTriLonNhat(a, m, n));
	return 0;
}
