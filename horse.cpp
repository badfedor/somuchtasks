#include <iostream>

char a[8][8];
int h_x, h_y;

int main()
{
	std::cout<<"y, x: ";
	std::cin>>h_x>>h_y;
	for(int i=0; i<8; i++)
	{
		for(int j=0; j<8; j++)
		{
			a[i][j] = '.';
		}
	}
	
	a[h_x][h_y] = '*';
	// ne dodelano!
	a[h_x+2][h_y+1] = '#';
	a[h_x+2][h_y-1] = '#';
	a[h_x-2][h_y+1] = '#';
	a[h_x-2][h_y-1] = '#';
	
	for(int i=0; i<8; i++)
	{
		for(int j=0; j<8; j++)
		{
			std::cout<<a[i][j];
		}
		std::cout<<std::endl;
	}
	
	
	return 0;
}
