#include <iostream>
#include <cstdlib>
#include <ctime>

const unsigned int days = 100000000, rain_rand_max = 100000000;
unsigned int july[days-1];

int main(void) {
	srand(time(NULL));
	
	for(int i=0; i<days; i++){
		july[i] = rand() % rain_rand_max;
		//std::cout<<july[i]<<" ";
	}
	std::cout<<std::endl<<std::endl;
	
	int max = july[0], max_1, day_max, day_max_1;
	bool trig = false;
	
	for(int i=0; i<days; i++){
		if(july[i]>max){
			max = july[i];
			day_max = i+1;
			trig = false;
		}	
		else if(july[i]==max && trig == false){
			max_1 = max;
			day_max_1 = day_max;
			day_max = i+1;
			trig = true;
		}
		else if(july[i]==max && trig == true){
			max = july[i];
			day_max = i+1;
		}			
	}
	if(max_1 == max)
		std::cout<<max_1<<" "<<day_max_1<<std::endl<<max<<" "<<day_max<<std::endl;
	else
		std::cout<<max<<" "<<day_max<<std::endl;
	return 0;
}
