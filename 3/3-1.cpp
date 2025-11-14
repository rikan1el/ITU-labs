#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
	float y = 1;
	for (int x = 3; x<= 25; x++){
		y = 5 * sin(2 * x);
		cout<<"x = "<<x<<" y = "<<y<<endl;
	}
	
}