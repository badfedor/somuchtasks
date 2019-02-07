#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned int a[1000], b=-1, c=0, f=0;
	while(b!=0){
		scanf("%d", &b);
		a[c]=b;
		c++;	
	}
	c=0;	
	while(a[c]!=0){
		printf("%d ", a[c]);
		c++;
	}
	printf("\n");
	for(int i=0; i<c; i++){
		for(int j=0; j<c; j++){
			if((a[i]+a[j])%7==0 && i!=j){
				f++;
				printf("%d %d \n - \n", a[i], a[j]);
			}
		}
	}
	printf("\n%d", f/2);
	return 0;
}
