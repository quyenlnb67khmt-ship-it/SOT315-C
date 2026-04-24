#include <stdio.h>

int main(){
	int x = 42;
	int *p = &x;
	int **q = &p;
	
	printf ("Gia tri cua x qua p:%d\n", *p);
	
	printf ("Gia tri cua x qua q:%d\n", **q);
	
	printf ("Dia chi cua x qua q:%p\n",*p);
	
	return 0;
}
