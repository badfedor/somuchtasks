#include <stdio.h>
#include <stdlib.h>

void decto(int i, const int t){
	int c=0, di=i, dc=c;
	if(i==0){
		printf("0\n");
		return;
	}
	while(di>0){
		di=di/t; dc++;
		
	}
	int a[dc];
	while(i!=0){
		a[c]=i%t;
		i=i/t;
		c++;
	}	
	int j;
	for(j=c; j>0; j--){
		printf("%d", a[j-1]);
		a[j-1] = 0;
	}
	printf("\n");
}

int main(){
	int radix, a;
	unsigned int num;
	printf("Radix? "); scanf("%d", &radix);
	if(radix < 2 || radix > 10){ return 0; }
	printf("From 0 to "); scanf("%d", &num);
	for(a=0; a<=num; a++){
		printf("%d - ", a);
		decto(a, radix);
	}
	return 0;
}

