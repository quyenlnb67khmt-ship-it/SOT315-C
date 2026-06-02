#include <stdio.h>
#include <math.h>

int NhapN() {
    int n;
    do {
        printf("Nhap n (2 <= n <= 100): ");
        scanf("%d", &n);
    } while (n < 2 || n > 100);
    return n;
}

double TinhS(int n) {
    double S = 0.0;
    for (int i = 1; i <= n; i++) {
        double term = (double)i / (i + 1);
        if (i % 2 == 1) {
            S -= term;
        }else{              
            S += term;
        }
    }
    return S;
}

int main() {
    int n = NhapN();
    double S = TinhS(n);
    printf("S = %.6lf\n", S);
    return 0;
}
