#include<stdio.h>

int main(){
	int a, b, c, d;
	printf("Nhap 4 so nguyen a, b, c, d: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	int max = a, min = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;
	if (b < min) min = b;
	if (c < min) min = c;
	if (d < min) min = d;
	
	int arr[4] = {a, b, c, d};
	int first = 1;
	for (int i = 0; i < 4; i++){
		if(arr[i] != max && arr[i] != min){
			if(!first) printf(" ");
			printf("%d", arr[i]);
			first = 0;
		}
	}
	if (first) printf("Khong co so nao ngoai max va min");
	printf("\n");
	
	return 0;
}
