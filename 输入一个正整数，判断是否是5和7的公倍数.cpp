#include <stdio.h>

int main() {
	
	double a;
	
	scanf("%lf",&a);
	
	int b=a;
	
	if(a-b==0&&a>0) {
		
		int j;
		
		j=a;
		
		if(j%5==0&&j%7==0)
		
			printf("%d��5��7�Ĺ�����",j);
			
		else
			
			printf("%d����5��7�Ĺ�����",j);

	}
	
	else 
	
		printf("%lf����������",a); 
		
	return 0;
} 
