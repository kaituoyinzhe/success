#include <stdio.h> 

int fac(int k) {
	
	int m=0;
	
	while(k) {
		
		k=k/10;
		
		m++;
		
	}
	
	return m;
	
}

int main() {
	
	int n;
	
	scanf("%d",&n);
	
	if(n<=0)
		
		printf("����������");
		
	else 
		
		printf("�������%dλ����\n",fac(n)) ;
		
	return 0;
	
	
}
