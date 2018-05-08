#include <iostream>

using namespace std;

int main () {
	
	int a[6];
	
	int i,j=0,k=0,w=0;
	
	for(i=1;i<6;i++)
	 
		cin>>a[i];
		
	cout <<endl;
	
	for(i=1;i<6;i++)
	
		if(a[i]%2==0)
		
			j++;
			
	for(i=1;i<6;i++)
	
		if(a[i]%3==0)
		
			k++;
			
	for(i=1;i<6;i++)
	
		if(a[i]%5==0)
		
			w++;
	
	cout<<"整除2的个数："<<j<<endl;
	
	cout<<"整除3的个数："<<k<<endl;
	
	cout<<"整除5的个数："<<w<<endl;
	
	return 0;
		
}
