# include <stdio.h>

void change (int **pp, int newVal)
{
	**pp = newVal;
	}
	
int main (){
	int x = 10;
	int *p = &x;
	int **pp = &p;
	
	printf ("Gia tri ban dau cua x: %d\n", x);
	
	change (pp, 99);
	
	printf ("Gia tri sau khi change cua x: %d\n", x);
	
	return 0;
}
