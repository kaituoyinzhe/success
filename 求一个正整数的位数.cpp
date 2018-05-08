#include <iostream>

using namespace std;

long fac(long  g) {
	
	long  m=0;
	
	while(g) {
		
		g=g/10;
		
		m++;
		
	}
	
	return m;
	
} 

int main() {
	
	long  n;
	
	cin>>n;
	
	if(n<=0)
	
		cout<<"这不是正整数。"<<endl;
		
	else 
	
		cout<<"这个数是个"<<fac(n)<<"位数"<<endl;
	
	return 0;
	 
}
