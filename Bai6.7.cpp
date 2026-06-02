#include<stdio.h>
#include<string.h>
#include<ctype.h>

void nhapChuoi(char s[]){
	printf("Nhap chuoi s: ");
	fgets(s, 101, stdin);
	s[strcspn(s, "\n")] = '\0';
}
void nhapChuoiCon(char s1[]){
	printf("Nhap chuoi con s1: ");
	fgets(s1, 101, stdin);
	s1[strcspn(s1, "\n")] = '\0';
}

int kiemTraChuoiCon(char s[], char s1[]){
	return strstr(s, s1) != NULL;
}

void timViTriKyTu(char s[], char c){
	printf("Vi tri cua '%c': ", c);
	int tim = 0; 
	for(int i = 0; s[i]; i++){
		if(s[i] == c){
			printf("%d", i);
			tim = 1;
		}
	}
	if(!tim){
		printf("Khong co");
	}
	printf("\n");
}

int demKyTuDacBiet(char s[]){
	int dem = 0;
	for(int i = 0; s[i]; i++){
		if(isalnum(s[i]) && !isspace(s[i])){
			dem++;
		}
	}
	return dem;
}

int main(){
	char s[101];
	char s1[101];
	char c;
	nhapChuoi(s);
	nhapChuoiCon(s1);
	if(kiemTraChuoiCon(s, s1)){
		printf("Chuoi con xuat hien!\n");
	} else {
		printf("Chuoi con khong xuat hien!\n");
	}
	printf("Nhap ky tu c: ");
	scanf("%c", &c);
	timViTriKyTu(s, c);
	int dacbiet = demKyTuDacBiet(s);
	printf("So ky tu dac biet: %d\n", dacbiet);
	return 0;
}
