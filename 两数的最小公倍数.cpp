#include <stdio.h>

int gcd(int m,int n) {
	
	int r=m;
	
	while (m%r!=0||n%r!=0) r--;
	
	return r;
	
}

int sct (int m,int n) {
	
	int y;
	
	y=m*n/gcd(m,n);
	
	return y;
	
}

int main () {
	
	int m,n,i;
	
	scanf("%d%d",&m,&n);
	
	i=sct(m,n);
	
	printf("%d和%d的最小公倍数为:%d",m,n,i);
	
	return 0;
	
}
