#include <stdio.h>

int main() {
	
	int a,b;
	
	for (a=1;a<=6;a++) {
	
		for(b=1;b<=6-a;b++) 
		
			putchar(' ');
			
		for(b=1;b<=2*a-1;b++)
		
			putchar('*');
			
		putchar('\n');
		
	}
	
	for (a=1;a<=5;a++) {
	
		for(b=1;b<=a;b++)
		
			putchar(' ');
			
		for(b=1;b<=11-2*a;b++)
		
			putchar('*');
			
		putchar('\n');
		
	}
	
	return 0;
	
}
