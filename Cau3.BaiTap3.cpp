#include <stdio.h>
#include <string.h>
#include <ctype.h>

void NhapChuoi(char s[]) {
    do {
        printf("Nhap chuoi (toi da 100 ky tu, it nhat 2 tu): ");
        fgets(s, 101, stdin);
        s[strcspn(s, "\n")] = '\0';
        if (strlen(s) > 100) {
            printf("Chuoi qua dai. Vui long nhap lai.\n");
            continue;
        }
        int tu = 0;
        int inWord = 0;
        for (int i = 0; s[i]; i++) {
            if (s[i] != ' ') {
                if (!inWord) {
                    tu++;
                    inWord = 1;
                }
            } else {
                inWord = 0;
            }
        }
        if (tu < 2) {
            printf("Chuoi phai co it nhat 2 tu. Vui long nhap lai.\n");
        } else {
            break;
        }
    } while (1);
}

void TuCuoi(char s[]) {
    int len = strlen(s);
    int i = len - 1;
    while (i >= 0 && s[i] == ' ') i--;
    int end = i;
    while (i >= 0 && s[i] != ' ') i--;
    int start = i + 1;
    printf("Tu cuoi cung: ");
    for (int j = start; j <= end; j++)
        printf("%c", s[j]);
    printf("\n");
}

int DemDB(char s[]) {
    int count = 0;
    for (int i = 0; s[i]; i++) {
        if (!isalnum(s[i]) && !isspace(s[i]))
            count++;
    }
    return count;
}

int main() {
    char s[101];
    NhapChuoi(s);
    printf("Chuoi vua nhap: %s\n", s);
    TuCuoi(s);
    int soDB = DemDB(s);
    printf("So ky tu dac biet: %d\n", soDB);
    return 0;
}
