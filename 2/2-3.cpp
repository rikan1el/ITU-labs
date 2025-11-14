#include <iostream>
using namespace std;

int main()
{
	char a,b;
	cout<<"a = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	int count = 0;
	if (a>='0' and a<='9'){
		count++;	
	}
	if (b>='0' and b<='9'){
		count++;
	}
	cout<<count<<endl;
}