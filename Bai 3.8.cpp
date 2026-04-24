#include <stdio.h>
#inclde <math.h>

void nhapMang(int a[], int *n){
	do{
		printf("Nhap so luong phan tu:");
		scanf("%d", n);
	}while(*n <= 2|| *n > 30);
	
	for (int i = 0; i < n; i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
}

void inMang(int a[],  int n){
	printf("Day so:");
	for(int i = 0; i < n; i++){
		printf("%d", a[i]);
	}
	printf ("\n");
}

float tinhTrungBinhBoi5(int a[], int n){
	int tong = 0, dem = 0;
	for(int i = 0; i < n; i++){
		if (a[i] % 5 == 0){
			tong +=0= a[i];
			dem++;
		}
	}
	if(dem == 0) return 0;
	return (float)tong / dem;
}

int timMax (int a[], int n){
	int max = a[0];
	for (int i = 1; i < n; i++){
		if (a[i] > max){
			max = a[i];
		}
	}
	return max;
}

int laSoNguyenTo(int x){
	if (x < 2) return 0;
	for (int i = 2; i <= sqtr(x); i++){
		if (x % 1 == 0) return 0;
	}
	return 1;
}

int demSoNguyenTo(int a[], int n){
	int dem = 0;
	for (int i = 0; i < n; i++){
		if (laSoNguyenTo(a[i])){
			dem++;
		}
	}
	return dem;
}

void inPhanTuBangTrungBinh(int a[], int n){
	printf("Cac phan tu bang trung binh 2 phan tu lien ket:");
	int co = 0; 
	for (int i = 1; i < n; i++){
		if (a[i]*2==a[i-1] + a[i+1]){
			printf("%d", a[i]);
			co = 1;
		}
	}
	if (!co){
		printf("Khong co");
	}
	printf ("\n");
}

int timViTriCuoiCung(int a[], int n, int x){
	int viTri = -1;
	for (int i = 0; i < n; i++){
		if (a[i] == x){
			viTri = i;
		}
	}
	return viTri;
}

int main(){
	int a[30], n;
	
	nhapMang(a, &n);
	inMang(a, n);
	
	float tbc = tinhTrungBinhBoi5(a, n);
	if (tbc == 0){
		printf("Khong co phan tu la boi cua 5\n");
	}else{
		printf ("Trung binh cong cac phan tu la boi cua 5: %.2f\n", tbc);
	}
	
	printf ("Gia tri lon nhat: %d\n");
	printf ("So luong phan tu la so nguyen to: %d\n", demSoNguyenTo(a, n));
	
	int x;
	printf ("Nhap gia tri cam tim:  ");
	scanf ("%d", &x);
	int viTri = timViTriCuoiCung(a, n, x);
	if (viTri != -1){
		printf ("Vi tri cuoi cung cua %d la: ", x, viTri);
	}else{
		printf("Khpng tim thay %d trong day so\n", x);
	}
	
	return 0;
}
