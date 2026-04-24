# include <stdio.h>
int main(){
	int nam;
	printf("Nhap nam:");
	scanf ("%d",&nam);
	
	if (nam%400==0||(nam%4==0 && nam%100!=0)){
		printf("Nam nay la nam nhuan");
	}else{
		printf ("Nam nay la nam khong nhuan");
	}

	return 0;
}
