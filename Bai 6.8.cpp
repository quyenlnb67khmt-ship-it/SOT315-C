#include<stdio.h>
#include<string.h>
#include<ctype.h>

void nhapChuoi(char s[]){
	printf("Nhap chuoi: ");
	fgets(s, 101, stdin);
	s[strcspn(s, "\n")] = '\0';
}

void chuanHoa(char s[]){
	int i, j;
	while(s[i] == ' '){
		i++;
	}
	if(i > 0){
		for(j = 0; s[i]; j++){
			s[j] = s[i];
		}
		s[j] = '\0';
	}
	i = strlen(s) - 1;
	while(i >= 0 && s[i] == ' '){
		i--;
	}
	s[i + 1] = '\0';
	for(i = 0; s[i]; i++){
		if(s[i] == ' '&& s[i+1] == ' '){
			for(j = i; s[j]; j++){
				s[j] = s[j+1];
			}
			i--;
		}
	}
}

void inTuDaiNhat(char s[]){
	int maxLen = 0, startMax = 0;
	for(int i = 0; s[i]; i++){
		if(s[i] != ' '){
			int start = i;
			while(s[i] && s[i] != ' '){
				i++;
			}
			int len = i - start;
			if(len > maxLen){
				maxLen = len; 
				startMax = start;
			}
			i--;
		}
	}
	printf("Tu dai nhat la: ");
	for(int j = startMax; j<startMax + maxLen; j++){
		putchar(s[j]);
	}
	printf("Co %d ky tu\n", maxLen);
}

int main(){
	char s[101];
	nhapChuoi(s);
	chuanHoa(s);
	printf("Chuoi chuan hoa: %s\n", s);
	inTuDaiNhat(s);
	return 0;
}
