# include <stdio.h>
int main()
{
	int tuoi;
	printf ("Nhap tuoi:");
	scanf("%d", &tuoi);
	
	if (tuoi>= 18){
		printf("Du tuoi hoc lai xe");
	}else{
		printf("Chua du tuoi hoc lai xe");
	}
	return 0;
}
