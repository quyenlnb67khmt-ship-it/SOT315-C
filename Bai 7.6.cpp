#include <stdio.h>
#include <string.h>

struct Sach {
    char maSach[10];
    char tenSach[100];
    char tacGia[50];
    int namXB;
    char nhaXB[50];
};

void NhapSach(struct Sach *s) {
    printf("Ma sach: "); fgets(s->maSach, 10, stdin); s->maSach[strcspn(s->maSach, "\n")] = '\0';
    printf("Ten sach: "); fgets(s->tenSach, 100, stdin); s->tenSach[strcspn(s->tenSach, "\n")] = '\0';
    printf("Tac gia: "); fgets(s->tacGia, 50, stdin); s->tacGia[strcspn(s->tacGia, "\n")] = '\0';
    printf("Nam xuat ban: "); scanf("%d", &s->namXB);
    printf("Nha xuat ban: "); getchar(); fgets(s->nhaXB, 50, stdin); s->nhaXB[strcspn(s->nhaXB, "\n")] = '\0';
}

void InSach(struct Sach s) {
    printf("%s - %s - %s - %d - %s\n", s.maSach, s.tenSach, s.tacGia, s.namXB, s.nhaXB);
}

void InSachTheoNXB(struct Sach ds[], int n, char xb[]) {
    printf("\nSach cua nha xuat ban %s:\n", xb);
    int found = 0;
    for (int i = 0; i < n; i++)
        if (strcmp(ds[i].nhaXB, xb) == 0) {
            InSach(ds[i]);
            found = 1;
        }
    if (!found) printf("Khong co sach nao.\n");
}

void SapXepGiamTheoNam(struct Sach ds[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (ds[i].namXB < ds[j].namXB) {
                struct Sach temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
}

void TimSachDauTienCuaTacGia(struct Sach ds[], int n, char tg[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(ds[i].tacGia, tg) == 0) {
            printf("\nSach dau tien cua tac gia %s:\n", tg);
            InSach(ds[i]);
            return;
        }
    }
    printf("\nKhong tim thay sach cua tac gia %s.\n", tg);
}

void CapNhatNamXB(struct Sach ds[], int n, char ma[], int namMoi) {
    for (int i = 0; i < n; i++) {
        if (strcmp(ds[i].maSach, ma) == 0) {
            ds[i].namXB = namMoi;
            printf("Da cap nhat nam xuat ban cho sach %s.\n", ma);
            return;
        }
    }
    printf("Khong tim thay sach co ma %s.\n", ma);
}

int main() {
    struct Sach ds[100];
    int n;
    do {
        printf("Nhap so sach (2 <= n <= 100): ");
        scanf("%d", &n);
        getchar();
    } while (n < 2 || n > 100);

    for (int i = 0; i < n; i++) {
        printf("\nNhap sach thu %d:\n", i+1);
        NhapSach(&ds[i]);
    }

    char xb[50];
    printf("\nNhap nha xuat ban can tim: ");
    fgets(xb, 50, stdin); xb[strcspn(xb, "\n")] = '\0';
    InSachTheoNXB(ds, n, xb);

    SapXepGiamTheoNam(ds, n);
    printf("\nDanh sach sau khi sap xep giam dan theo nam:\n");
    for (int i = 0; i < n; i++) InSach(ds[i]);

    char tg[50];
    printf("\nNhap ten tac gia can tim: ");
    fgets(tg, 50, stdin); tg[strcspn(tg, "\n")] = '\0';
    TimSachDauTienCuaTacGia(ds, n, tg);w

    char ma[10];
    int namMoi;
    printf("\nNhap ma sach can cap nhat nam: ");
    fgets(ma, 10, stdin); ma[strcspn(ma, "\n")] = '\0';
    printf("Nhap nam xuat ban moi: ");
    scanf("%d", &namMoi);
    CapNhatNamXB(ds, n, ma, namMoi);
    return 0;
}
