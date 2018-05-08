#include <iostream>

using namespace std;

int main() {
	
	int a,b;
	
	for(a=1;a<=6;a++) {
		
		for(b=1;b<=6-a;b++)
			
			cout<<' ';
			
		for(b=1;b<=2*a-1;b++)
			
			cout<<'*';
			
		cout<<'\n';
			 
	}
	
	for(a=1;a<=5;a++) {
		
		for(b=1;b<=a;b++)
		
			cout<<' ';
			
		for(b=1;b<=11-2*a;b++)
		
			cout<<'*';
			
		cout<<'\n';
		
	} 
	
	return 0;
	
} 
