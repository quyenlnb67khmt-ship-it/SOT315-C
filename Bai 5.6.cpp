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
        for (int j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void inTrenCheoChinh(int a[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void inDuoiCheoPhu(int a[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = n - 1 - i; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, a[MAX][MAX];
    
    printf("Nhap n: ");
    scanf("%d", &n);
    nhapMaTran(a, n);
    printf("Ma tran vua nhap:\n");
    
    inMaTran(a, n);
    
    printf("Tren duong cheo chinh:\n");
    inTrenCheoChinh(a, n);
    
    printf("Duoi duong cheo phu:\n");
    inDuoiCheoPhu(a, n);
    
    return 0;
}
