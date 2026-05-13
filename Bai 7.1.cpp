#include<stdio.h>

struct HocPhan{
	char maHP[10];
	char tenHP[100];
	int soTC;
	float dtb;
};

void Nhap(struct HocPhan *hp){
	printf("Nhap ma hoc phan: ");
	scanf("%s", hp->maHP);
	fflush(stdin);
	
	printf("Nhap ten hoc phan: ");
	gets(hp->tenHP);
	
	printf("Nhap so tin chi: ");
	scanf("%d", &hp->soTC);
	
	printf("Nhap diem trung binh: ");
	scanf("%f", &hp->dtb);
}

void Xuat(struct HocPhan hp){
	printf("Thong tin hoc phan vua nhap: ");
	printf("%s, %s, %d, %f", hp.maHP, hp.tenHP, hp.soTC, hp.dtb);
}

int main(){
	struct HocPhan hp;
	Nhap(&hp);
	Xuat(hp);
	return 0;
}
