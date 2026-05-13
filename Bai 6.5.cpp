#include<stdio.h>
#include<string.h>
#include<ctype.h>

void nhapHoTen(char s[]){
	printf("Nhap ho ten(da chuan hoa): ");
	fgets(s, 101, stdin);
	s[strcspn(s, "\n")] = '\0';
}

int demTu(char s[]){
	int dem = 0, soTu = 0;
	for(int i = 0; s[i]; i++){
		if(!soTu){
			dem++;
			soTu = 1;
		} else {
			soTu = 0;
		}
	}
	return dem;
}

void inTen(char s[]){
	int len = strlen(s);
	int i = len - 1; 
	while (i >= 0 && s[i] == ' ') i--;
	int end = i;
	while (i >= 0 && s[i] != ' ') i--;
	int start = i + 1;
	printf("Ten: ");
	for (int j = start; j <= end; j++){
		putchar(s[j]);
	}
	printf("\n");
}

int demKyTu(char s[], char x){
	int dem = 0;
	for(int i = 0; s[i]; i++){
		if (s[i] == x){
			dem++;
		}
	}
	return dem;
}
int main(){
	char s[101], x;
	nhapHoTen(s);
	int soTu = demTu(s);
	printf("So tu: %d\n", soTu);
	inTen(s);
	printf("Nhap ky tu x: ");
	scanf("%c", &x);
	int soLan = demKyTu(s, x);
	printf("Ky tu '%c' xuat hien lan thu %d\n", x, soLan);
	return 0;
}
