#include<stdio.h>
#include<math.h>

int areCoprime (int a, int b){
	int temp;
	
	if (a < 0) a = -a;
	if (b < 0) b = -b;
	
	while (b != 0){
		temp = b;
		b = a % b;
		a = temp;
		}
		return (a == 1);
		}
int sumrange (int x, int y){
	int sum = 0;
	
	if (x > y){
		int temp = x;
		x = y;
		y = temp; 
		}
	for (int i = x; i <= y; i++){
		sum += i;
		}
	return sum;
	}
	
	double power (int x, int y){
		double result = 1.0;
		
