#include <stdio.h>

void NhapMang(float a[], int *n) {
    do {
        printf("Nhap n (3 <= n <= 50): ");
        scanf("%d", n);
    } while (*n < 3 || *n > 50);
    for (int i = 0; i < *n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

void InMang(float a[], int n) {
    printf("Mang: ");
    for (int i = 0; i < n; i++) printf("%.2f ", a[i]);
    printf("\n");
}

void SapXepTang(float a[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (a[i] > a[j]) {
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

float TimXuatHienNhieuNhat(float a[], int n) {
    float maxVal = a[0];
    int maxCount = 1;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++)
            if (a[j] == a[i]) count++;
        if (count > maxCount) {
            maxCount = count;
            maxVal = a[i];
        }
    }
    return maxVal;
}

float TBCViTriChan(float a[], int n) {
    float sum = 0;
    int count = 0;
    for (int i = 0; i < n; i += 2) { // v? trí 0,2,4,... (ch? s? ch?n)
        sum += a[i];
        count++;
    }
    return sum / count;
}

int DemLonHonTBC(float a[], int n, float tbc) {
    int count = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > tbc) count++;
    return count;
}

int main() {
    float a[50];
    int n;
    NhapMang(a, &n);
    InMang(a, n);
    SapXepTang(a, n);
    printf("Mang sau sap xep tang: ");
    InMang(a, n);
    float xh = TimXuatHienNhieuNhat(a, n);
    printf("Phan tu xuat hien nhieu nhat: %.2f\n", xh);
    float tbc = TBCViTriChan(a, n);
    printf("Trung binh cong cac vi tri chan: %.2f\n", tbc);
    int dem = DemLonHonTBC(a, n, tbc);
    printf("So phan tu lon hon TBC: %d\n", dem);
    return 0;
}
