#include<stdio.h>
#include<string.h>

struct HocPhan{
	char maHP[10];
	char tenHP[50];
	int soTinChi;
	float diemTB;
};

void nhapHocPhan(struct HocPhan *hp){
	printf("Nhap ma hoc phan: ");
	fgets(hp->maHP, 10, stdin);
	hp -> maHP[strcspn(hp->maHP, "\n")] = '\0';
	printf("Nhap ten hoc phan: ");
    fgets(hp->tenHP, 50, stdin);
    hp->tenHP[strcspn(hp->tenHP, "\n")] = '\0';
    printf("Nhap so tin chi: ");
    scanf("%d", &hp->soTinChi);
    printf("Nhap diem trung binh: ");
    scanf("%f", &hp->diemTB);
    getchar();
}

void InHocPhan(struct HocPhan hp) {
    printf("\n--- Thong tin hoc phan ---\n");
    printf("Ma HP: %s\n", hp.maHP);
    printf("Ten HP: %s\n", hp.tenHP);
    printf("So tin chi: %d\n", hp.soTinChi);
    printf("Diem TB: %.2f\n", hp.diemTB);
}

int main(){
	struct HocPhan hp;
	nhapHocPhan(&hp);
	InHocPhan(hp);
	return 0;
}
