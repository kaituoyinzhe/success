#include <iostream> 

using namespace std;

int gcd(int m,int n) {
	
	int r=m;
	
	while (m%r!=0||n%r!=0) r--;
	
	return r;
}

int sct(int m,int n) {
	
	int y;
	
	y=m*n/gcd(m,n);
	
	return y;
}

int main() {
	
	int m,n,t;
	
	cin>>m>>n;
	
	t=sct(m,n);
	
	cout <<m<<"和"<<n<<"的最小公倍数是："<<t<<endl; 
	
	return 0;
	
}
