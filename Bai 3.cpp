#include <stdio.h>
#include <string.h>
#include <ctype.h>

void NhapChuoi(char s[]) {
    printf("Nhap chuoi (toi da 100 ky tu): ");
    fgets(s, 101, stdin);
    s[strcspn(s, "\n")] = '\0'; 
}

void InChuoi(char s[]) {
    printf("Chuoi vua nhap: %s\n", s);
}

int DemKyTuSo(char s[]) {
    int count = 0;
    for (int i = 0; s[i]; i++) {
        if (isdigit(s[i])) count++;
    }
    return count;
}

void TimViTri(char s[], char c) {
    printf("Vi tri xuat hien cua '%c': ", c);
    int found = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] == c) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong co ky tu '%c' trong chuoi.", c);
    }
    printf("\n");
}

int main() {
    char s[101];
    char c;
    NhapChuoi(s);
    InChuoi(s);
    int soKyTuSo = DemKyTuSo(s);
    printf("So ky tu so trong chuoi: %d\n", soKyTuSo);
    printf("Nhap ky tu c: ");
    scanf("%c", &c);
    TimViTri(s, c);
    return 0;
}
