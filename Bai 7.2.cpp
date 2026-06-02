#include <stdio.h>
#include <string.h>

struct SinhVien {
    char maSV[10];
    char hoTen[50];
    float diemTB;
};

void NhapSinhVien(struct SinhVien *sv) {
    printf("Ma SV: ");
    fgets(sv->maSV, 10, stdin);
    sv->maSV[strcspn(sv->maSV, "\n")] = '\0';
    printf("Ho ten: ");
    fgets(sv->hoTen, 50, stdin);
    sv->hoTen[strcspn(sv->hoTen, "\n")] = '\0';
    printf("Diem TB: ");
    scanf("%f", &sv->diemTB);
    getchar();
}

void InDanhSach(struct SinhVien ds[], int n) {
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %s - %.2f\n", ds[i].maSV, ds[i].hoTen, ds[i].diemTB);
    }
}

void SapXepTheoDiem(struct SinhVien ds[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (ds[i].diemTB > ds[j].diemTB) {
                struct SinhVien temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}

int main() {
    struct SinhVien ds[100];
    int n;
    do {
        printf("Nhap so sinh vien (2 < n < 100): ");
        scanf("%d", &n);
        getchar();
    } while (n <= 2 || n >= 100);

    for (int i = 0; i < n; i++) {
        printf("\nNhap sinh vien thu %d:\n", i+1);
        NhapSinhVien(&ds[i]);
    }
    InDanhSach(ds, n);
    SapXepTheoDiem(ds, n);
    printf("\nSau khi sap xep tang dan theo diem:\n");
    InDanhSach(ds, n);
    return 0;
}
