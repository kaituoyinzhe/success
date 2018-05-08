#include <iostream>

using namespace std;

int main() {
	
	double a;
	
	cin>>a;
	
	int b=a;

	
	if(a-b==0&&a>0) {
		
		int j;
		
		j=a;
	
		if(j%5==0&& j%7==0)
				
			cout<<"是5和7的公倍数"<<endl;
					
		else
		
			cout<<"不是5和7的公倍数" <<endl;
					 
	}
	
	else 
		
		cout<<a<<"不是正整数"<<endl; 
	
	return 0;
}
