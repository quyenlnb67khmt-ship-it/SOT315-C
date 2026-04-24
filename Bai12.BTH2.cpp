#include <stdio.h>

int main(){
	int x = 35;
	int *p = &x;
	
	printf ("Dia chi cua x (qua p):%d\n ", p);
	printf ("Gia tri cua x (qua p):%d\n", *p);
	
	*p = 100;
	
	printf ("Gia tri moi cua x:%d \n ", x);
	
	return 0;
}
