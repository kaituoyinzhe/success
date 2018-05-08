#include <stdio.h>

int main() {
	
	double a;
	
	scanf("%lf",&a);
	
	int b=a;
	
	if(a-b==0&&a>0) {
		
		int j;
		
		j=a;
		
		if(j%5==0&&j%7==0)
		
			printf("%d是5和7的公倍数",j);
			
		else
			
			printf("%d不是5和7的公倍数",j);

	}
	
	else 
	
		printf("%lf不是正整数",a); 
		
	return 0;
} 
