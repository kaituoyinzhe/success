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
	
		cout<<"�ⲻ����������"<<endl;
		
	else 
	
		cout<<"������Ǹ�"<<fac(n)<<"λ��"<<endl;
	
	return 0;
	 
}
