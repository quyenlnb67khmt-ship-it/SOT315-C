#include <stdio.h>
#define MAX 10

void nhapMaTran(int a[MAX][MAX], int m, int n) {
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void inMaTran(int a[MAX][MAX], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++){
            printf("%d ", a[i][j];
        }
        printf("\n");
    }
}

void nhanMaTran(int a[MAX][MAX], int m, int n, int b[MAX][MAX], int p, int q) {
    if (n != p) {
        printf("Khong the nhan: so cot A != so hang B\n");
        return;
    }
    int c[MAX][MAX];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < q; j++) {
            c[i][j] = 0;
            for (int k = 0; k < n; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Ma tran tich:\n");
    inMaTran(c, m, q);
}

int main() {
    int m, n, p, q;
    int a[MAX][MAX], b[MAX][MAX];
    printf("Nhap m, n cho A: ");
    scanf("%d%d", &m, &n);
    nhapMaTran(a, m, n);
    printf("Nhap p, q cho B: ");
    scanf("%d%d", &p, &q);
    nhapMaTran(b, p, q);

    printf("Ma tran A:\n");
    inMaTran(a, m, n);
    printf("Ma tran B:\n");
    inMaTran(b, p, q);

    nhanMaTran(a, m, n, b, p, q);
    return 0;
}
