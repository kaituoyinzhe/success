#include <iostream>

using namespace std;

int main() {
	
	float a,b;
	
	char ch;
	
	cin>>a;
	
	ch=getchar();
	
	cin>>b;
	
	switch(ch) {
		
		case '+':cout<<"a+b="<<a+b;break;
		
		case '-':cout<<"a-b="<<a-b;break;
		
		case '*':cout<<"a*b="<<a*b;break;
		
		case '/':cout<<"a/b="<<a/b;break;
		
		default:cout<<"���ǼӼ��˳����㡣"<<endl;break; 
		
	}
	 
	return 0;
	
}
