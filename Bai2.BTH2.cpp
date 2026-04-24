# include <stdio.h>

float tinhS (int n)
{
	float S = 0;
	for (int i = 1; i <= n; i++){
		S += 1.0 / (i*i);
	}
		return 0;
}

float tinhT (int n){
	float T = 0;
	for (int i = 1; i <= n; i++){
		T += 1.0 / i;
	}
		return 0;
}

int main (){
	int n; 
	printf ("Nhap n:");
	scanf ("%d", &n);
	
	if (n > 0){
		printf ("S = %.5f\n", tinhS (n));
		printf ("T = %.5f\n", tinhT (n));
	}
	else {
		printf ("n phai > 0\n");
	}
	return 0;
}
	
