#include <stdio.h>
#include <stdlib.h>

void nhapMang(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void inMang(int *a, int n) {
    printf("Mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void themPhanTu(int **a, int *n, int x, int k) {
    *n = *n + 1;
    *a = (int*)realloc(*a, (*n) * sizeof(int));
    
    for (int i = *n - 1; i > k; i--) {
        (*a)[i] = (*a)[i - 1];
    }
    (*a)[k] = x;
}

void xoaPhanTu(int **a, int *n, int p) {
    for (int i = p; i < *n - 1; i++) {
        (*a)[i] = (*a)[i + 1];
    }
    *n = *n - 1;
    *a = (int*)realloc(*a, (*n) * sizeof(int));
}

int main() {
    int *a;
    int n;
    
    do {
        printf("Nhap so luong phan tu (2 < n <= 40): ");
        scanf("%d", &n);
    } while (n <= 2 || n > 40);
    
    a = (int*)malloc(n * sizeof(int));
    
    nhapMang(a, n);
    printf("Mang vua nhap: ");
    inMang(a, n);
  
    int x, k;
    printf("\nNhap gia tri can them: ");
    scanf("%d", &x);
    do {
        printf("Nhap vi tri can them (0 <= k <= %d): ", n);
        scanf("%d", &k);
    } while (k < 0 || k > n);
    themPhanTu(&a, &n, x, k);
    printf("Mang sau khi them: ");
    inMang(a, n);
    
    int p;
    do {
        printf("\nNhap vi tri can xoa (0 <= p < %d): ", n);
        scanf("%d", &p);
    } while (p < 0 || p >= n);
    xoaPhanTu(&a, &n, p);
    printf("Mang sau khi xoa: ");
    inMang(a, n);
 
    free(a);
    
    return 0;
}
