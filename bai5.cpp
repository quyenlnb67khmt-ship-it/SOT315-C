#include<stdio.h>

int main(){
	int month, year, days;
	printf("Nhap thang va nam: ");
	scanf("%d %d",&month,&year);
	switch (month){
		case 1: case 3: case 5: case 7:
		case 8:	case 10: case 12:
			days = 31;
			break;
		case 4: case 6: case 9: case 11:
			days = 30;
			break;
		case 2:
			if (year%400==0||(year%4==0 && year%100!=0)){
				days = 29;
				}
			else{
				days = 28;
			}
			break;
		defause:
			printf ("Thang khong hop le");
			return 0;
}
printf ("Thang %d nam %d co %d ngay\n", month, year, days);
return 0;
}
