#include <stdio.h>
#define MAX 10

void nhapMaTran(float a[MAX][MAX], int m, int n) {
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
}

void inMaTran(float a[MAX][MAX], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++){
            printf("%.2f ", a[i][j]);
        }
        printf("\n");
    }
}

void chuyenVi(float a[MAX][MAX], int m, int n) {
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++){
            printf("%.2f ", a[i][j]);
        }
        printf("\n");
    }
}

void xoaHang(float a[MAX][MAX], int *m, int n, int row) {
    for (int i = row; i < *m - 1; i++){
        for (int j = 0; j < n; j++){
            a[i][j] = a[i + 1][j];
        }
    }
    (*m)--;
}

int main() {
    int m, n, row;
    float a[MAX][MAX];
    printf("Nhap m, n: ");
    scanf("%d%d", &m, &n);
    nhapMaTran(a, m, n);
    printf("Ma tran vua nhap:\n");
    inMaTran(a, m, n);
    printf("Ma tran chuyen vi:\n");
    chuyenVi(a, m, n);

    printf("Nhap hang can xoa: ");
    scanf("%d", &row);
    xoaHang(a, &m, n, row);
    printf("Ma tran sau khi xoa hang %d:\n", row);
    inMaTran(a, m, n);
    return 0;
}
