#include <stdio.h>

char NhapKyTu() {
    char c;
    printf("Nhap ky tu chu cai: ");
    scanf(" %c", &c); 
    return c;
}

void InMauSac(char c) {
    switch (c) {
        case 'r': case 'R':
            printf("Red\n");
            break;
        case 'b': case 'B':
            printf("Blue\n");
            break;
        case 'g': case 'G':
            printf("Green\n");
            break;
        default:
            printf("Not in the color\n");
    }
}

int main() {
    char ch = NhapKyTu();
    InMauSac(ch);
    return 0;
}
