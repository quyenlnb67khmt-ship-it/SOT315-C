#include <stdio.h>

void NhapMang(int a[], int *n) {
    do {
        printf("Nhap so luong phan tu (3 <= n <= 20): ");
        scanf("%d", n);
    } while (*n < 3 || *n > 20);
    for (int i = 0; i < *n; i++) {
        printf("Nhap phan tu thu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void InMang(int a[], int n) {
    printf("Mang: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int TimPT(int a[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (a[i] == x) return i;
    return -1;
}

void XoaPTDT(int a[], int *n) {
    if (*n == 0) return;
    for (int i = 0; i < *n - 1; i++)
        a[i] = a[i+1];
    (*n)--;
}

int main() {
    int a[20], n;
    NhapMang(a, &n);
    InMang(a, n);
    
    int x;
    printf("Nhap gia tri x can tim: ");
    scanf("%d", &x);
    int vt = TimPT(a, n, x);
    if (vt != -1)
        printf("Phan tu %d xuat hien dau tien tai vi tri %d\n", x, vt);
    else
        printf("Khong tim thay %d\n", x);
    
    XoaPTDT(a, &n);
    printf("Mang sau khi xoa phan tu dau tien: ");
    InMang(a, n);
    return 0;
}
