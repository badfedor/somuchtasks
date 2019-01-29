#include <iostream>
#include <cmath>
using namespace std;

void removeNumber(int numbers[], int idx, int &size)
{
	int i;
	for(i = idx; i < size - 1; i++)
		numbers[i] = numbers[i + 1];
	size--;
}

void removeDuplicate(int numbers[], int &size)
	{
		int i, j;
		int number;
		for(i = 0; i < size; i++)
		{
			number = numbers[i];
			for(j = i + 1; j < size; j++)
			{
				if(number == numbers[j])
				{
					removeNumber(numbers, j, size); j--;			
				}
			}
		}
	}
	
int gcd(int x, int y)
{
  int r;
  if (x <= 0 || y <= 0)
    return 0;

  while ((r = x % y) != 0)
    {
      x = y;
      y = r;
    }
    return y;
}
	
int main() {
	int m; cin>>m; if(m<0 || m>1000 ){ return 0; }
	int s[m];
	for(int a=0; a<m; a++){
		cin>>s[a];
	}
	
	removeDuplicate(s, m);
	
	for(int i=0; i<m; i++){
		if(i+1!=m){
			if(s[i]>=s[i+1] || s[i]<1 || s[i]>pow(10, 6)){
				return 0;
			}
		}
	}
	
	int g = s[0];
    for (int i = 1; i < m; i++){
        g = gcd(g, s[i]);
	}	
	
	cout<<g<<endl;
	
	for(int i=0; i<m; i++){
		if(s[i] % g == 0){
			cout<<s[i]<<" ";
		}
	}
		
	cout<<endl;
	
	return 0;
}
