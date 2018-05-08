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
		
		printf("不是正整数");
		
	else 
		
		printf("这个数是%d位数。\n",fac(n)) ;
		
	return 0;
	
	
}
