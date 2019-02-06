#include <stdio.h>

int main(){
	unsigned int num = 0, count = 0;
	do{
		scanf("%d", &num);
		if(num%4==0 && num%10==2 && num<=30000){
			count++;
		}
	} while (num!=0);
	printf("%d\n", count);
	return 0;
}
