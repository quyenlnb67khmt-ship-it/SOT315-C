#include <stdio.h>

int NhapDonGia() {
    int dongia;
    do {
        printf("Nhap don gia (>= 150000): ");
        scanf("%d", &dongia);
    } while (dongia < 150000);
    return dongia;
}

void NhapSoLuong(int *m, int *n) {
    printf("Nhap so nguoi lon: ");
    scanf("%d", m);
    printf("Nhap so tre em: ");
    scanf("%d", n);
}

// Hàm tính ti?n ngu?i l?n
float TienNguoiLon(int m, int dongia) {
    return m * dongia;
}

float TienTreEm(int n, int dongia) {
    return n * dongia * 0.7;
}

void InHoaDon(int dongia, int m, int n, float tienNL, float tienTE) {
    printf("\n--- HOA DON THANH TOAN ---\n");
    printf("Don gia: %d dong\n", dongia);
    printf("So nguoi lon: %d\n", m);
    printf("So tre em: %d\n", n);
    printf("Tien nguoi lon: %.0f dong\n", tienNL);
    printf("Tien tre em: %.0f dong\n", tienTE);
    printf("Tong tien: %.0f dong\n", tienNL + tienTE);
}

int main() {
    int dongia = NhapDonGia();
    int m, n;
    NhapSoLuong(&m, &n);
    float tienNL = TienNguoiLon(m, dongia);
    float tienTE = TienTreEm(n, dongia);
    InHoaDon(dongia, m, n, tienNL, tienTE);
    return 0;
}
