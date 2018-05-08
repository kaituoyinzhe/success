#include <iostream>

using namespace std;

int main() {
	
	int a,b;
	
	for (a=1;a<=4;a++) {
		
		for (b=1;b<=2*a-1;b++) 
			
		cout<<"*";
		
		cout<<endl;
		
	}
	
	for (a=3;a>=1;a--) {
		
		for (b=1;b<=2*a-1;b++)
		
		cout<<"*";
		
		cout<<endl;
	}
	
	return 0;
} 
