#include <stdio.h>
#define MAX 10

void nhapMaTran(int a[MAX][MAX], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
}

void inMaTran(int a[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

int kiemTraDonVi(int a[MAX][MAX], int n) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            if (i == j && a[i][j] != 1) return 0;
            if (i != j && a[i][j] != 0) return 0;
        }
    }
    return 1;
}

int kiemTraMaPhuong(int a[MAX][MAX], int n) {
    int sumMain = 0, sumSub = 0;
    for (int i = 0; i < n; i++){
        sumMain += a[i][i];
        sumSub += a[i][n - 1 - i];
    }
    if (sumMain != sumSub) return 0;

    for (int i = 0; i < n; i++) {
        int rowSum = 0, colSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += a[i][j];
            colSum += a[j][i];
        }
        if (rowSum != sumMain || colSum != sumMain) return 0;
    }
    return 1;
}

int kiemTraDoiXung(int a[MAX][MAX], int n) {
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i][j] != a[j][i]) return 0;
    return 1;
}

int main() {
    int n, a[MAX][MAX];
    printf("Nhap n: ");
    scanf("%d", &n);
    nhapMaTran(a, n);
    printf("Ma tran vua nhap:\n");
    inMaTran(a, n);
    
    if (kiemTraDonVi(a, n)){
    	printf("La ma tran don vi\n");
    } else {
    	printf("Khong la ma tran don vi \n");
    }
    
    if(kiemTraMaPhuong(a, n)){
    	printf("La ma phuong \n");
    }else{
    	printf("Khong phai la ma phuong \n");
	}
	
	if(kiemTraDoiXung(a, n)){
		printf("La ma tran doi xung\n");
	} else {
		printf("Ma tran khong doi xung\n");
	}
	
    return 0;
}
