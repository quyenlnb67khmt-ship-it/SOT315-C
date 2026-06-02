#include <stdio.h>
#include <string.h>

void NhapChuoi(char s[]) {
    printf("Nhap chuoi da chuan hoa (toi da 200 ky tu): ");
    fgets(s, 201, stdin);
    s[strcspn(s, "\n")] = '\0';
}

void InChuoi(char s[]) {
    printf("Chuoi vua nhap: %s\n", s);
}

int LaPalindrome(char s[]) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++)
        if (s[i] != s[len - 1 - i]) return 0;
    return 1;
}

int main() {
    char s[201];
    NhapChuoi(s);
    InChuoi(s);
    if (LaPalindrome(s))
        printf("Chuoi la palindrome\n");
    else
        printf("Chuoi khong la palindrome\n");
    return 0;
}
