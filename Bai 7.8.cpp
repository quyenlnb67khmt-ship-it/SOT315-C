#include <stdio.h>

void NhapMaTran(float a[][10], int *m, int *n) {
    do {
        printf("Nhap so dong m, so cot n (2 <= m,n <= 10): ");
        scanf("%d %d", m, n);
    } while (*m < 2 || *m > 10 || *n < 2 || *n > 10);
    for (int i = 0; i < *m; i++) {
        for (int j = 0; j < *n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
}

void InMaTran(float a[][10], int m, int n) {
    printf("Ma tran:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%8.2f", a[i][j]);
        printf("\n");
    }
}

void TimMaxVaViTri(float a[][10], int m, int n) {
    float max = a[0][0];
    int row = 0, col = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] > max) {
                max = a[i][j];
                row = i; col = j;
            }
    printf("Phan tu lon nhat = %.2f tai hang %d, cot %d\n", max, row, col);
}

void TimMinMoiCot(float a[][10], int m, int n) {
    printf("Gia tri nho nhat tung cot:\n");
    for (int j = 0; j < n; j++) {
        float min = a[0][j];
        for (int i = 1; i < m; i++)
            if (a[i][j] < min) min = a[i][j];
        printf("Cot %d: %.2f\n", j, min);
    }
}

float TongBien(float a[][10], int m, int n) {
    float sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == m-1 || j == 0 || j == n-1)
                sum += a[i][j];
        }
    }
    return sum;
}

void HangTongLonNhat(float a[][10], int m, int n) {
    float maxSum = -1e9;
    int bestRow = 0;
    for (int i = 0; i < m; i++) {
        float sum = 0;
        for (int j = 0; j < n; j++) sum += a[i][j];
        if (sum > maxSum) {
            maxSum = sum;
            bestRow = i;
        }
    }
    printf("Hang %d co tong lon nhat = %.2f\n", bestRow, maxSum);
}

int main() {
    float a[10][10];
    int m, n;
    NhapMaTran(a, &m, &n);
    InMaTran(a, m, n);
    TimMaxVaViTri(a, m, n);
    TimMinMoiCot(a, m, n);
    float tongBien = TongBien(a, m, n);
    printf("Tong cac phan tu tren bien: %.2f\n", tongBien);
    HangTongLonNhat(a, m, n);
    return 0;
}
