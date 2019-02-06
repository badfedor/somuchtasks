#include <stdio.h>

int main(){
	unsigned int c = 0, min, sec, time, winners = 0;
	scanf("%d", &c);
	if(c<1 || c>100){ return 0; }
	for(int i=0; i<c; i++){
		scanf("%d%d", &min, &sec);
		if(min<=60 && sec<=60){
			time = min*60+sec;
			if(time<=18*60+30){
				winners++;
			}
		}
	}
	printf("%d\n", winners);
	return 0;
}
