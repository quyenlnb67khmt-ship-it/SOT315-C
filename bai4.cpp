#include <stdio.h>
int main(){
	int nam, day_of_week;
	printf("Nhap nam:");
	scanf("%d",&nam);
	day_of_week = (nam + ((nam-1)/4) 
	- ((nam-1)/100) + ((nam-1)/400)
	)%7;
	switch (day_of_week){
		case 0:
			printf("Chu nhat");
			break;
		case 1:
			printf("Thu hai");
			break;
		case 2:
			printf("Thu ba");
			break;
		case 3:
			printf("Thu tu");
				break;
		case 4:
			printf("Thu nam");
			break;
		case 5:
			printf("Thu sau");
			break;
		case 6:
			printf("Thu bay");
			break;
	return 0;
	}
}
	
