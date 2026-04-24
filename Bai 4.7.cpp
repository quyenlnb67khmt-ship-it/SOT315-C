#include <stdio.h>

void nhapMang(int a[], int n, char ten) {
    for (int i = 0; i < n; i++) {
        printf("Nhap %s[%d]: ", &ten, i);
        scanf("%d", &a[i]);
    }
}

void inMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void sapXepTangDan(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void ghepMang(int a[], int n, int b[], int m, int c[], int *size) {
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    while (i < n) c[k++] = a[i++];
    while (j < m) c[k++] = b[j++];
    *size = k;
}

void themGiuTangDan(int a[], int *n, int x) {
    int i = *n - 1;
    while (i >= 0 && a[i] > x) {
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = x;
    (*n)++;
}

int main() {
    int a[50], b[50], c[100];
    int n, m, size;
    
    do {
        printf("Nhap n (2 < n <= 50): ");
        scanf("%d", &n);
    } while (n <= 2 || n > 50);
    
    do {
        printf("Nhap m (2 < m <= 50): ");
        scanf("%d", &m);
    } while (m <= 2 || m > 50);
    
    printf("\nNhap mang arr1:\n");
    nhapMang(a, n, 'a');
    printf("Nhap mang arr2:\n");
    nhapMang(b, m, 'b');
    
    printf("\nMang arr1: ");
    inMang(a, n);
    printf("Mang arr2: ");
    inMang(b, m);
    
    sapXepTangDan(a, n);
    sapXepTangDan(b, m);
    
    printf("\nMang arr1 sau sap xep: ");
    inMang(a, n);
    printf("Mang arr2 sau sap xep: ");
    inMang(b, m);
    
    ghepMang(a, n, b, m, c, &size);
    printf("\nMang sau khi ghep (tang dan): ");
    inMang(c, size);
    
    int x;
    printf("\nNhap x can them: ");
    scanf("%d", &x);
    themGiuTangDan(c, &size, x);
    printf("Mang sau khi them %d: ", x);
    inMang(c, size);
    
    return 0;
}
