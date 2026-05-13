#include<stdio.h>

int main(){
	char nn;
	printf("nhap vao mot ky tu(A/a, P/p, N/n): ");
	scanf("%c", &nn);
	
	switch(nn){
		case 'A':
		case 'a':
			printf("Good morning \n");
			break;
		case 'P':
		case 'p':
			printf("Bonjour \n");
			break;
		case 'N': 
		case 'n':
			printf("Ohayogozaimasu \n");
		default:
			printf("Chao buoi sang \n"); 
	}
	return 0;
}
