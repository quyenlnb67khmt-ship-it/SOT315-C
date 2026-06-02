#include <stdio.h>
#include <string.h>
#include <ctype.h>

void NhapChuoi(char s[]) {
    printf("Nhap chuoi da chuan hoa (toi da 100 ky tu): ");
    fgets(s, 101, stdin);
    s[strcspn(s, "\n")] = '\0';
}

void InChuoi(char s[]) {
    printf("Chuoi: %s\n", s);
}

int LaPalindrome(char w[]) {
    int len = strlen(w);
    for (int i = 0; i < len/2; i++)
        if (w[i] != w[len-1-i]) return 0;
    return 1;
}

void TuDaiNhat(char s[]) {
    int len = strlen(s);
    int maxLen = 0, startMax = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] != ' ') {
            int start = i;
            while (i < len && s[i] != ' ') i++;
            int curLen = i - start;
            if (curLen > maxLen) {
                maxLen = curLen;
                startMax = start;
            }
            i--; // lui l?i
        }
    }
    printf("Tu dai nhat: ");
    for (int j = startMax; j < startMax + maxLen; j++) putchar(s[j]);
    printf(" (do dai %d)\n", maxLen);
}

int DemTuPalindrome(char s[]) {
    int count = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] != ' ') {
            int start = i;
            while (i < len && s[i] != ' ') i++;
            // tách t?
            char word[101];
            int wlen = i - start;
            for (int j = start; j < i; j++) word[j-start] = s[j];
            word[wlen] = '\0';
            if (LaPalindrome(word)) count++;
            i--;
        }
    }
    return count;
}

int main() {
    char s[101];
    NhapChuoi(s);
    InChuoi(s);
    TuDaiNhat(s);
    int soPalindrome = DemTuPalindrome(s);
    printf("So tu palindrome: %d\n", soPalindrome);
    return 0;
}
