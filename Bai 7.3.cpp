#include <stdio.h>
#include <math.h>

int KiemTraNguyenTo(int x) {
    if (x < 2) return 0;
    int can = sqrt(x);
    for (int i = 2; i <= can; i++)
        if (x % i == 0) return 0;
    return 1;
}

int LaHopSo(int x) {
    return (x > 1 && !KiemTraNguyenTo(x));
}

void NhapMang(int a[], int *n) {
    do {
        printf("Nhap n (5 <= n <= 100): ");
        scanf("%d", n);
    } while (*n < 5 || *n > 100);
    for (int i = 0; i < *n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void InMang(int a[], int n) {
    printf("Mang: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

void InCapKeTongK(int a[], int n, int k) {
    printf("Cac cap phan tu ke nhau co tong = %d:\n", k);
    int found = 0;
    for (int i = 0; i < n-1; i++) {
        if (a[i] + a[i+1] == k) {
            printf("(%d, %d) ", a[i], a[i+1]);
            found = 1;
        }
    }
    if (!found) printf("Khong co");
    printf("\n");
}

int DemHopSo(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++)
        if (LaHopSo(a[i])) count++;
    return count;
}

int main() {
    int a[100], n, k;
    NhapMang(a, &n);
    InMang(a, n);
    printf("Nhap k: ");
    scanf("%d", &k);
    InCapKeTongK(a, n, k);
    int soHopSo = DemHopSo(a, n);
    printf("So hop so trong mang: %d\n", soHopSo);
    return 0;
}
