#include <stdio.h>

#include <math.h>

int main () {
	
	int a=0,b=0,c=0;
	
	while (a<=9) {
	
		while (b<=9) {
	
			while(c<=9) {
			
				if(a*100+b*10+c+c*100+b*10+a==1333) {
				
					printf("a=%d,b=%d,c=%d",a,b,c);
					
					printf("\n");
					
				}
				
			c++; 
			
			}
			
		b++;
	
		}

	a++;
	
	}
	
	return 0;
}
