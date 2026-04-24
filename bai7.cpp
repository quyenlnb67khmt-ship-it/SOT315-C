#include <stdio.h>

int isMultiple(int x, int y)
{
	return x % y == 0;
}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b =  temp;
	return 0;
}


int main(){
	int x, y;
	printf("Nhap so nguyen x:");
	scanf("%d", &x);
	printf ("Nhap so nguyen y:");
	scanf("%d", &y);
	
	printf("X co la boi cua y khong? %s", isMultiple(x,y)? "Co" : "Khong");
	printf("\n");
	
	swap(x,y);
	printf("Sau khi hoan doi: x = %d, y = %d", x, y);
	
	printf("\n");
	printf("UCLN: %d", gcd(x,y));
	printf("\n");
	printf("BCNN: %d", lcm(x,y));
	
	return 0;
}
