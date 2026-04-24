# include <stdio.h>

long long giaiThua (int n){
	long long gt = 1;
	for (int i = 1; i <= n; i++){
		gt *= i; 
		}
	return gt;
	}

long long toHop(int n, int k)
{
	return giaiThua(n)/(giaiThua(k) * giaiThua(n - k));
}

int main(){
	int n,k;
	
	printf ("Nhap n, k: ");
	scanf ("%d %d", &n, &k);
	
	if (n >= k && k >= 0) {
		printf ("%d! = %lld\n", n, giaiThua(n));
		printf ("C(%d, %d) = %lld\n", n, k, toHop(n, k));
	} else {
		printf ("n phai >= k va k >= 0\n");
	}
	
	return 0;
}
	
