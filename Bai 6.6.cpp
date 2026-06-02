#include<stdio.h>
#include<string.h>
#include<ctype.h>

void nhapChuoiChuan(char s[]){
	printf("Nhap chuoi da chuan hoa: ");
	fgets(s, 101, stdin);
	s[strcspn(s, "\n")] = '\0';
}

int demKyTu(char s[]){
	int dem = 0; 
	for (int i = 0; s[i]; i++){
		if(isdigit(s[i])){
			dem++;
		}
	}
	return dem;
}

void thayNguyenAmBang0(char s[]){
	for(int i = 0; s[i]; i++){
		char c = tolower(s[i]);
		if(c == 'a'||c == 'e'||c == 'i'||c == 'o'||c == 'u'){
			s[i] = '0';
		}
	}
}

int kiemTraDoiXung(char s[]){
	int len = strlen(s);
	for (int i = 0; s[i]; i++){
		if(s[i] != s[len - 1 - i]){
			return 0;
		}
	}
	return 1;
}
int main(){
	char s[101];
	nhapChuoiChuan(s);
	int soKyTuSo = demKyTu(s);
	printf("So ky tu so la: %d\n", soKyTuSo);
	thayNguyenAmBang0(s);
	printf("Chuoi sau khi thay nguyen am: %s\n", s);
	if(kiemTraDoiXung(s)){
		printf("Chuoi doi xung\n");
	} else {
		printf("Chuoi khong doi xung\n");
	}
	return 0;
}
