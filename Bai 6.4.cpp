#include<stdio.h>
#include<string.h>
#include<ctype.h>

void nhapChuoiChuan(char s[]){
	printf("Nhap chuoi da chuan hoa: ");
	fgets(s, 101, stdin);
	s[strcspn(s, "\n")] = '\0';
}

void inChuoi(char s[]){
	printf("Chuoi vua nhap la: %s\n", s);
}
int demNguyenAm(char s[]){
	int dem = 0;
	for(int i = 0; s[i]; i++){
		char c = tolower(s[i]);
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
			dem++;
		}
	}
	return dem;
}

void thaySoBangSao(char s[]){
	for(int i = 0; s[i]; i++){
		if(isdigit(s[i])) {
			s[i] = '*';
		}
	}
}

int main(){
	char s[101];
	nhapChuoiChuan(s);
	inChuoi(s);
	int nguyenAm = demNguyenAm(s);
	printf("So nguyen am: %d\n", nguyenAm);
	thaySoBangSao(s);
	printf("Chuoi sau khi thay so: %s\n", s);
	return 0;
}
