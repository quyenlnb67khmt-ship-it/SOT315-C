#include <stdio.h>

void nhapMang(int a[], int n) {
	do{
		printf ("Nhap so phan tu cua mang:");
		scanf("%d", n);
	}while(n <= 2|| n > 50);
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void inMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void themVaoDau(int a[], int *n, int y) {
    for (int i = *n; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = y;
    (*n)++;
}

void xoaTrungLap(int a[], int *n) {
    for (int i = 0; i < *n; i++) {
        for (int j = i + 1; j < *n; j++) {
            if (a[i] == a[j]) {
                // Xóa ph?n t? t?i j
                for (int k = j; k < *n - 1; k++) {
                    a[k] = a[k + 1];
                }
                (*n)--;
                j--; // Ki?m tra l?i v? trí j m?i
            }
        }
    }
}

int main() {
    int a[100], n, y;
    
    nhapMang(a, n);
    printf("Mang vua nhap: ");
    inMang(a, n);
    
    printf("\nNhap so can them vao dau: ");
    scanf("%d", &y);
    themVaoDau(a, &n, y);
    printf("Mang sau khi them vao dau: ");
    inMang(a, n);

    xoaTrungLap(a, &n);
    printf("Mang sau khi xoa cac phan tu trung lap: ");
    inMang(a, n);
    
    return 0;
}
