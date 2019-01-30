#include <stdio.h>
#include <stdlib.h>

int main(){
	int t;
	printf("Radix? "); scanf("%d", &t);
	for(int i=0; i<10; i++){
		int c=0, di=i, dc=c;
		while(di!=0){
			di=di/t; dc++;
		}
		int a[dc];
		while(i!=0){
			a[c]=i%t;
			i=i/t;
			c++;
		}	
		for(int j=c; j>0; j--){
			printf("%d", a[j-1]);
			a[j-1] = 0;
		}
		printf("\n");
	}
	return 0;
}

