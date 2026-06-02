#include <stdio.h>
#include <math.h>

int NhapN() {
    int n;
    do {
        printf("Nhap n (2 <= n <= 10): ");
        scanf("%d", &n);
    } while (n < 2 || n > 10);
    return n;
}

double NhapX() {
    double x;
    printf("Nhap x: ");
    scanf("%lf", &x);
    return x;
}

double TinhC(int n, double x) {
    double ketQua = sqrt(x);                 
    for (int i = 2; i <= n; i++) {
        ketQua = sqrt(i * x + ketQua);       
    }
    return ketQua;
}

int main() {
    int n = NhapN();
    double x = NhapX();
    double C = TinhC(n, x);
    printf("C = %.2lf\n", C);
    return 0;
}
