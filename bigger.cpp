#include <iostream>
#include <ctime>
#include <cstdlib>

const int n = 100;
int a[n], s;

int main()
{
	srand(time(NULL));
	for(int i=0; i<n; i++)
	{
		a[i] = rand()%100;
		std::cout<<a[i]<<" ";
	}
	std::cout<<std::endl;
	for(int i=1; i<n; i++)
	{
		if(a[i-1]<a[i] && a[i]>a[i+1])
		{
			s++;
			std::cout<<"- "<<a[i-1]<<" "<<a[i]<<" "<<a[i+1]<<std::endl;
		}
	}
	std::cout<<"total: "<<s<<std::endl;
	return 0;
}	
