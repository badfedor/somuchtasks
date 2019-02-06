#include <stdio.h>

int main(){
	unsigned int num = 0; float num_sum = 0; int num_count = -1;
	do{
		scanf("%d", &num);
		if(num % 8==0 && num<=300){
			num_sum += num;
			num_count++;
		}
	} while (num!=0);
	float mid = num_sum / num_count;
	
	if(num_count!=0){
		printf("%.1f\n", mid);
	}
	else{
		printf("NO\n");
	}
	return 0;
}
