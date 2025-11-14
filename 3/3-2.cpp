#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
	int z;
	cout<<"Z = ";
	cin>>z;
	float y1 = 1, y2 = 0, y;
	
	for (int x = 1; x<= 5; x++){
		y1 *= 0.5*x;
		}
	for(int r = -3; r<= 2; r++) {
		y2 += pow(z, r+pow(r,2));
	}
	y = (z / pow(z,2) * y1) + (8.2 * y2);
	 cout<<"y = "<<y<<endl;
}