#include <stdio.h>

int main () {
	
	float a,b,c,max,i=1;
	
	scanf("%f%f",&a,&b);
	
	if(a>b)
	
		max=a;
		
	else 
	
		max=b;
	
	while (i<=8) {
		
		scanf("%f",&c);
		
		if(c>=max) {
			
			max=c;
			
		}
		
		i++;
		
	}
	
	printf("最大值是：%f",max);
	
	return 0;
	
}
