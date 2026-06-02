#include <stdio.h>


void NhapMang(int a[], int *n) {
    do {
        printf("Nhap n (2 <= n <= 40): ");
        scanf("%d", n);
    } while (*n < 2 || *n > 40);
    for (int i = 0; i < *n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void InMang(int a[], int n) {
    printf("Mang: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void ThemPhanTu(int a[], int *n, int x, int p) {
    if (p < 0) p = 0;
    if (p > *n) p = *n;
    for (int i = *n; i > p; i--)
        a[i] = a[i - 1];
    a[p] = x;
    (*n)++;
}

void TimViTriDuongNhoNhat(int a[], int n) {
    int minVal = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            if (minVal == -1 || a[i] < minVal)
                minVal = a[i];
        }
    }
    if (minVal == -1) {
        printf("Khong co phan tu duong trong mang.\n");
        return;
    }
    printf("Cac vi tri co phan tu duong nho nhat (gia tri %d): ", minVal);
    for (int i = 0; i < n; i++)
        if (a[i] == minVal)
            printf("%d ", i);
    printf("\n");
}

int main() {
    int a[100];  
    int n;
    NhapMang(a, &n);
    printf("Mang vua nhap:\n");
    InMang(a, n);

    int x, p;
    printf("Nhap gia tri x can them: ");
    scanf("%d", &x);
    printf("Nhap vi tri p (0-based): ");
    scanf("%d", &p);

    ThemPhanTu(a, &n, x, p);
    printf("Mang sau khi them:\n");
    InMang(a, n);

    TimViTriDuongNhoNhat(a, n);
    return 0;
}
