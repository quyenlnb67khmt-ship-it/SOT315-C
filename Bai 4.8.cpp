#include <stdio.h>
#include <stdlib.h>

void nhapMang(float *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%f", &a[i]);
    }
}

void inMang(float *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2f ", a[i]);
    }
    printf("\n");
}

void themVaoCuoi(float **a, int *n, float x) {
    *n = *n + 1;
    *a = (float*)realloc(*a, (*n) * sizeof(float));
    (*a)[*n - 1] = x;
}

void xoaTatCaGiaTriK(float **a, int *n, float k) {
    int i = 0;
    while (i < *n) {
        if ((*a)[i] == k) {
            for (int j = i; j < *n - 1; j++) {
                (*a)[j] = (*a)[j + 1];
            }
            *n = *n - 1;
            *a = (float*)realloc(*a, (*n) * sizeof(float));
        } else {
            i++;
        }
    }
}

int main() {
    float *a;
    int n;
    
    do {
        printf("Nhap so luong phan tu (2 < n <= 30): ");
        scanf("%d", &n);
    } while (n <= 2 || n > 30);
    
    a = (float*)malloc(n * sizeof(float));
    
    nhapMang(a, n);
    printf("Mang vua nhap: ");
    inMang(a, n);
    
    float x;
    printf("\nNhap gia tri can them vao cuoi: ");
    scanf("%f", &x);
    themVaoCuoi(&a, &n, x);
    printf("Mang sau khi them cuoi: ");
    inMang(a, n);
    
    float k;
    printf("\nNhap gia tri can xoa tat ca: ");
    scanf("%f", &k);
    xoaTatCaGiaTriK(&a, &n, k);
    printf("Mang sau khi xoa tat ca %.2f: ", k);
    inMang(a, n);
    
    free(a);
    return 0;
}
