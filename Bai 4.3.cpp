#include <stdio.h>

void nhapMang(float a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%f", &a[i]);
    }
}

void inMang(float a[], int n) {
    if (n == 0) {
        printf("Khong co phan tu\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("%.2f ", a[i]);
    }
    printf("\n");
}

void xoaSoKhong(float a[], int *n) {
    int i = 0;
    while (i < *n) {
        if (a[i] == 0) {
            // Xóa ph?n t? t?i v? trí i
            for (int j = i; j < *n - 1; j++) {
                a[j] = a[j + 1];
            }
            (*n)--;
        } else {
            i++;
        }
    }
}

void tachMang(float a[], int n, float duong[], int *m1, float am[], int *m2) {
    *m1 = 0;
    *m2 = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            duong[*m1] = a[i];
            (*m1)++;
        } else if (a[i] < 0) {
            am[*m2] = a[i];
            (*m2)++;
        }
    }
}

int main() {
    float a[100];
    float duong[100], am[100];
    int n;
    int m1, m2;
    
    do {
        printf("Nhap so luong phan tu (3 < n <= 50): ");
        scanf("%d", &n);
    } while (n <= 3 || n > 50);

    printf("\nNhap mang:\n");
    nhapMang(a, n);
 
    printf("Mang vua nhap: ");
    inMang(a, n);
 
    xoaSoKhong(a, &n);
    printf("Mang sau khi xoa cac phan tu bang 0: ");
    inMang(a, n);
 
    tachMang(a, n, duong, &m1, am, &m2);
    printf("\nMang cac so duong: ");
    inMang(duong, m1);
    printf("Mang cac so am: ");
    inMang(am, m2);
    
    return 0;
}
