#include <stdio.h>
#define MAX 10

void nhapMaTran(float a[MAX][MAX], int n) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
}

void inMaTran(float a[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            printf("%.2f ", a[i][j]);
        }
        printf("\n");
    }
}

float trungBinhCheoChinh(float a[MAX][MAX], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i][i];
    }
    return sum / n;
}

int kiemTraToanDuong(float a[MAX][MAX], int n) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] <= 0) 
			return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    float a[MAX][MAX];
    printf("Nhap n: ");
    scanf("%d", &n);
    nhapMaTran(a, n);
    printf("Ma tran vua nhap:\n");
    inMaTran(a, n);
    printf("Trung binh cheo chinh: %.2f\n", trungBinhCheoChinh(a, n));
    if (kiemTraToanDuong(a, n))
        printf("Ma tran toan so duong\n");
    else
        printf("Ma tran khong toan so duong\n");
    return 0;
}
