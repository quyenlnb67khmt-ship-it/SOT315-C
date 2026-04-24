#include <stdio.h>

float tinh (float a, float b, char op)
{
	switch (op){
		case '+': return a + b;
		case '-': return a - b;
		case '*': return a * b;
		case '/': return a / b;
		if (b!=0) return a / b;
		else 
		{
			printf ("Loi: chia cho 0 \n");
			return 0;
		}
		default:
			printf ("Phep toan khong hop le \n");
			return 0;
		}
}

int main()
{
	float a,b;
	char op;
	printf ("Nhap a,b:");
	scanf ("%f %f", &a, &b);
	printf ("Nhap phep toan (+, -, *, /): ");
	scanf ("%c", op);
	
	float kq = tinh (a, b, op);
	printf ("Ket qua: %.2f %c %.2f = %.2f \n");
	
	return 0;
}

