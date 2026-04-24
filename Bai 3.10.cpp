#include <stdio.h>
#define N 50

void Input(int a[], int *n){
	printf("Nhap so luong phan tu: ");
	scanf("%d", n);
	for (int i = 0; i < *n; i++){
		printf("Nhap phan tu thu %d:", i + 1);
		scanf ("%d", &a[i]);
	}
}

int Max(int a[], int n){
	int max = a[0];
	for(int i = 1; i < n; i++){
		if (a[i] > max){
			max = a[i];
	}
	return max;
}

int Count(int a[], int n, int x){
	int c = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == x){
			c++;
		}
	}
	return c;
}

int main(){
	int arr[N], n;
	
	Input(arr, &n);
	
	int max = Max(arr, n);
	printf("Gia tri lon nhat la: %d\n", max);
	
	int x; 
	printf("Nhap gia tri can dem: ");
	scanf("%d", &d);
	int count = count(arr, n, x);
	printf("So phan tu co gia tri %d trong mang la: %d\n", x, count);
	
	return 0;
}

