#include<stdio.h>
#define MAX 10

void nhapMT(float a[MAX][MAX], int *m, int *n){
	printf("Nhap m, n:");
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

void inSoChanVaDauSo(int a[MAX][MAX], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = i; j < n; j++){
			if(a[i][j] % 2 == 0){
				printf("%d", a[i][j]);
			} else {
				printf("* ");
			}
		} 
		printf("\n");
	}
}

void inTrenDuongCheoChinh(int a[MAX][MAX], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = i; j < n; j++){
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int m, n, a[MAX][MAX];
	nhapMT(a, m, n);
	inMT(a, m, n);
	
	printf("So Chan / *:\n");
	inSoChanVaDauSao(a, m, n);
	printf("Phan tu tren duong cheo chinh: \n");
	inTrenDuongCheoChinh(a, m, n);
	
	return 0;
}
