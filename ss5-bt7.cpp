#include <stdio.h>

int main(){
	int a, b;
	printf("Nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Nhap so thu hai: ");
	scanf("%d",&b);
	int min = a < b ? a : b;
	int i;
	for ( i = min ; i>=1; i-- ){
		if((a % i ==0)&&(b % i ==0)){
			printf("%d\n", i);
			break; 
		} 
	} 
	return 0; 
}
