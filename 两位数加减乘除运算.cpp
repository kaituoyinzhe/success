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
		
		default:cout<<"不是加减乘除运算。"<<endl;break; 
		
	}
	 
	return 0;
	
}
