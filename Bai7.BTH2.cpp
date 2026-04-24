#include <stdio.h>

void swap (int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main (){
	int x, y;
	
	printf ("Nhap x, y: ");
	scanf ("%d %d", &x, &y);
	
	printf ("Truoc khi swap: x = %d, y = %d\n", x, y);
	swap (&x, &y);
	printf ("Sau khi swap: x = %d, y = %d\n",x, y);
	
	return 0;
}
