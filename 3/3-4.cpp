#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
	int x;
	cout<<"x = ";
	cin>>x;
	float k, i, s1 = 0, s2 = 1;
	if (x > 20){
	for (int k = 1; k <= x ; k++){
		s1 += pow(k,2);
		}
		cout<<"s = "<<s1-1;
	}
	else if (x < 20){
	for(int i = 2; i <= x; i++) {
		s2 *= sin(i);
	}
	cout<<"s = "<<s2;
	}
}