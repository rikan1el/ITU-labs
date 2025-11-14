#include <iostream>  
#include <cmath>
#include <cstdlib>
using namespace std; 

int main(){
	int a1,b1,a2,b2,c1,c2;
	double c12,c22;
	cout<<"a1 = ";
	cin>>a1;
	cout<<"b1 = ";
	cin>>b1;
	cout<<"a2 = ";
	cin>>a2;
	cout<<"b2 = ";
	cin>>b2;
	c1 = pow(a1 * b1,2);
	c2 = pow(a2 * b2,2);
	c12 = sqrt(c1);
	c22 = sqrt(c2);
	if (c12>c22){
		cout<<c12;
	}
	else if (c12<c22){
		cout<<c22<<endl;
	}
	else{
		cout<<c12<<"="<<c22<<endl;
	}
	system("pause");
	return 0;
}



 