#include <iostream>

using namespace std;

int main () {
	
	int i;
	long k=0,m=1;
	
	for ( i=1;i<=20;i++) {
		
		m=m*i;
		
		k=k+m;
		
		cout<<"k="<<k<<endl;+
			
	}
	

	cout<<"1!+...+20!="<<k<<endl;
	
	return 0;
	
}
