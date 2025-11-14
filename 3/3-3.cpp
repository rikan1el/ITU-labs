#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
	float y, x;
	
	for (float x = -5.0; x<= 5.0; x+= 0.2){
		if (x<= -3.0){
			y = pow(x,3.0);
		}
		else if (-3.0 < x && x <= 2.0) {
			y = pow(2.0,x);
		}
		else if (x>2.0) {
			y = log(x);
		}
		cout<<"x = "<<x<<" y = "<<y<<endl;
	}
	 
}