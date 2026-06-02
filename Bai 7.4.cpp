#include <stdio.h>
#include <math.h>

int KiemTraNguyenTo(int x) {
    if (x < 2) return 0;
    int can = sqrt(x);
    for (int i = 2; i <= can; i++)
        if (x % i == 0) return 0;
    return 1;
}

void NhapMaTran(int a[][10], int *n) {
    do {
        printf("Nhap n (2 <= n <= 10): ");
        scanf("%d", n);
    } while (*n < 2 || *n > 10);
    for (int i = 0; i < *n; i++) {
        for (int j = 0; j < *n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void InMaTran(int a[][10], int n) {
    printf("Ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
}

int TongDuongCheoPhu(int a[][10], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i][n - 1 - i];
    return sum;
}

void CotNhieuNguyenToNhat(int a[][10], int n) {
    int maxCount = -1;
    int bestCol = -1;
    for (int j = 0; j < n; j++) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (KiemTraNguyenTo(a[i][j])) count++;
        }
        if (count > maxCount) {
            maxCount = count;
            bestCol = j;
        }
    }
    printf("Cot %d co nhieu so nguyen to nhat (%d so)\n", bestCol, maxCount);
}

int main() {
    int a[10][10], n;
    NhapMaTran(a, &n);
    InMaTran(a, n);
    int tong = TongDuongCheoPhu(a, n);
    printf("Tong duong cheo phu: %d\n", tong);
    CotNhieuNguyenToNhat(a, n);
    return 0;
}
