#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

const int n = 100;
int a[n], s; 
double median, sum=0;

int main()
{
	srand(time(NULL));
	for(int i=0; i<n; i++)
	{
		a[i] = rand()%100;
		std::cout<<a[i]<<" ";
		sum+=a[i];
	}
	std::cout<<std::endl;
	median = sum/n;
	int cur = fabs(median - a[0]);
	int cur_n, cur_a;
	for(int i=1; i<n; i++)
	{
		if( fabs(median - a[i])<cur )
		{
			cur = fabs(median - a[i]);
			cur_n = i;
			cur_a = a[i];
		}	
	}
	std::cout<<"closer to median "<<median<<" is a["<<cur_n<<"] = "<<cur_a<<std::endl;
	return 0;
}	
