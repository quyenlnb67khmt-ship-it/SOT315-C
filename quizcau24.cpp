#include <stdio.h>
int main()
{
	int a, b = 3;
	switch ((a = 2) ? 6:4)
	{
		case 6 :
			b += 2;
		case 4:
			a--;
		default:
			a - b--;
		}
		printf ("%d %d", a, b);
	}
