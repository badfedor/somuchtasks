#include <iostream>
using namespace std;

int main() {
	int count, num; 
	cin >> count >> num;
	
	int arr[3][count];
	
	for(int i=0; i<3; i++){
		for(int j=0; j<count; j++){
			int cur_num;
			cin >> cur_num;
			arr[i][j] = cur_num;
		}
	} 
	
	for(int i=0; i<count; i++){
		int eq = arr[0][i];
		for(int j=0; j<count; j++){
			int twoeq = eq + arr[1][j];
			for(int s=0; s<count; s++){
				if(twoeq+arr[2][s]==num){
					cout << "YES" << endl << eq << " " << arr[1][j] << " " << arr[2][s] << endl;
					return 0;
				}
			}
		}
	}
	
	cout << "NO" << endl;
	
	return 0;
}
