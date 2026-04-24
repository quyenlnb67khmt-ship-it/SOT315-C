#include <stdio.h>

int dienTich (int d, int r) {
	reuturn d * r;
}

int chuVi(int d, int r){
	return (d+r)*2;
}

int main() {
	int dai, rong;
	char ch;
	
	printf ("Nhap chieu dai, chieu rong: ");
	scanf ("%d %d", &dai, &rong);
	printf ("Nhap 's' tinh dien  tich, 'p' tinh chu vi: ");
	scanf ("%c", &ch);
	
	switch (ch){
		case 's':
		case 'S':
			printf ("Dien tich = %d\n", dienTich(dai,rong));
			break;
		case 'p':
		case 'P':
			
