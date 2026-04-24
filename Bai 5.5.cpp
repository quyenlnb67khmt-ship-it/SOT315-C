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
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int tongBienNgoai(int a[MAX][MAX], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1){
                sum += a[i][j];
            }
        }
    }
    return sum;
}

int timMaxCot(int a[MAX][MAX], int m, int p) {
    int max = a[0][p];
    for (int i = 1; i < m; i++){
        if (a[i][p] > max) max = a[i][p];
    }
    return max;
}

void hoanDoiCot(int a[MAX][MAX], int m, int j1, int j2){
    for (int i = 0; i < m; i++){
        int temp = a[i][j1];
        a[i][j1] = a[i][j2];
        a[i][j2] = temp;
    }
}

int main() {
    int m, n, a[MAX][MAX], p, j1, j2;
    printf("Nhap m, n: ");
    scanf("%d%d", &m, &n);
    nhapMaTran(a, m, n);
    printf("Ma tran vua nhap:\n");
    inMaTran(a, m, n);
    printf("Tong bien ngoai: %d\n", tongBienNgoai(a, m, n));

    printf("Nhap p: ");
    scanf("%d", &p);
    printf("Max cot %d: %d\n", p, timMaxCot(a, m, p));

    printf("Nhap j1, j2: ");
    scanf("%d%d", &j1, &j2);
    hoanDoiCot(a, m, j1, j2);
    printf("Ma tran sau hoan doi cot:\n");
    inMaTran(a, m, n);
    return 0;
}
