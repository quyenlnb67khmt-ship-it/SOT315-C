#include <stdio.h>
#include <string.h>
#include <ctype.h>

void NhapChuoi(char s[]) {
    printf("Nhap chuoi s: ");
    fgets(s, 101, stdin);
    s[strcspn(s, "\n")] = '\0';
}

void NhapChuoiCon(char s1[]) {
    printf("Nhap chuoi con s1: ");
    fgets(s1, 101, stdin);
    s1[strcspn(s1, "\n")] = '\0';
}

int KiemTraChuoiCon(char s[], char s1[]) {
    return strstr(s, s1) != NULL;
}

void TimViTriKyTu(char s[], char c) {
    printf("Vi tri cua '%c': ", c);
    int found = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] == c) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) printf("khong co");
    printf("\n");
}

int DemKyTuDacBiet(char s[]) {
    int count = 0;
    for (int i = 0; s[i]; i++)
        if (!isalnum(s[i]) && !isspace(s[i]))
            count++;
    return count;
}

int main() {
    char s[101], s1[101], c;
    NhapChuoi(s);
    NhapChuoiCon(s1);
    if (KiemTraChuoiCon(s, s1))
        printf("Chuoi con xuat hien\n");
    else
        printf("Chuoi con khong xuat hien\n");
    printf("Nhap ky tu c: ");
    scanf("%c", &c);
    TimViTriKyTu(s, c);
    int dacbiet = DemKyTuDacBiet(s);
    printf("So ky tu dac biet: %d\n", dacbiet);
    return 0;
}
