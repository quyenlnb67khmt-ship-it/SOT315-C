#include <stdio.h>
#include <math.h>

void nhapMang(int a[], int n) {
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

int kiemTraDoiXung(int a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

void inPhanTuTrungLap(int a[], int n) {
    int daXet[100] = {0};
    printf("Cac phan tu xuat hien nhieu hon 1 lan: ");
    int co = 0;
    for (int i = 0; i < n; i++) {
        if (daXet[i] == 0) {
            int dem = 1;
            for (int j = i + 1; j < n; j++) {
                if (a[j] == a[i]) {
                    dem++;
                    daXet[j] = 1;
                }
            }
            if (dem > 1) {
                printf("%d ", a[i]);
                co = 1;
            }
        }
    }
    if (!co) printf("Khong co");
    printf("\n");
}

void timPhanTuXuatHienNhieuNhat(int a[], int n) {
    int maxDem = 0, giaTri = a[0];
    for (int i = 0; i < n; i++) {
        int dem = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[j] == a[i]) {
                dem++;
            }
        }
        if (dem > maxDem) {
            maxDem = dem;
            giaTri = a[i];
        }
    }
    printf("Phan tu xuat hien nhieu nhat: %d (xuat hien %d lan)\n", giaTri, maxDem);
}

int demGiaTriKhacNhau(int a[], int n) {
    int daXet[100] = {0};
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (daXet[i] == 0) {
            dem++;
            for (int j = i + 1; j < n; j++) {
                if (a[j] == a[i]) {
                    daXet[j] = 1;
                }
            }
        }
    }
    return dem;
}

int laSoHoanHao(int x) {
    if (x <= 1) return 0;
    int tong = 0;
    for (int i = 1; i <= x / 2; i++) {
        if (x % i == 0) {
            tong += i;
        }
    }
    return tong == x;
}

int demSoHoanHao(int a[], int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (laSoHoanHao(a[i])) {
            dem++;
        }
    }
    return dem;
}

int main() {
    int a[50], n;
    
    do {
        printf("Nhap so luong phan tu (2 < n <= 50): ");
        scanf("%d", &n);
    } while (n <= 2 || n > 50);
    
    nhapMang(a, n);
    printf("Mang vua nhap: ");
    inMang(a, n);
    
    if (kiemTraDoiXung(a, n)) {
        printf("Mang doi xung (palindrome)\n");
    } else {
        printf("Mang khong doi xung\n");
    }
    
    inPhanTuTrungLap(a, n);
    timPhanTuXuatHienNhieuNhat(a, n);
    printf("So luong gia tri khac nhau: %d\n", demGiaTriKhacNhau(a, n));
    printf("So luong so hoan hao: %d\n", demSoHoanHao(a, n));
    
    return 0;
}
