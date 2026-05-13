#include<stdio.h>

void nhapMTV(int a[][10], int n){
	printf("Nhap cac phan tu cua ma tran:\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void inMTV(int a[][10], int n){
	printf("Ma tran:\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}

void sapXepCC(int a[][10], int n){
	int cheo[10];
	for(int i = 0; i < n; i++){
		cheo[i] = a[i][i];
	}
	
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(cheo[i] < cheo[j]){
				int temp = cheo[i];
				cheo[i] = cheo[j];
				cheo[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++){
		a[i][i] = cheo[i];
	}
}
	
float tinhTBC(int a[][10], int n){
    int tong = 0;
    int dem = 2 * n;
    for (int i = 0; i < n; i++) {
    tong += a[i][0] + a[i][1];
    }
    return (float)tong / dem;
}
 

int main(){
	int n;
	
	do{
		printf("Nhap kich thuoc ma tran vuong n (2 <= n <= 10):");
		scanf("%d", &n);
	} while (n < 2||n > 10);
	
	int a[10][10];
	nhapMTV(a, n);
	
	printf("\n----Truoc khi sap xep----\n");
	inMTV(a, n);
	
	sapXepCC(a, n);
	printf("\n---Sau khi sap xep duong cheo chinh giam dan---\n");
	inMTV(a, n);
	
	float tbc = tinhTBC(a, n);
	printf("\nTrung binh cong cac phan tu thuoc 2 cot dau tien: %.2f\n", tbc);
	
	return 0;
}
