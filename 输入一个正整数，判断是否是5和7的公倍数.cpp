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
				
			cout<<"��5��7�Ĺ�����"<<endl;
					
		else
		
			cout<<"����5��7�Ĺ�����" <<endl;
					 
	}
	
	else 
		
		cout<<a<<"����������"<<endl; 
	
	return 0;
}
