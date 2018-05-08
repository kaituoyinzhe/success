#include <stdio.h> 

int main(){

	int a,b,c;
	
	for(a=0;a<=9;) { 
		
		for (b=0;b<=9;) {
			
			for(c=0;c<=9;) {
				
				if((a*100+b*10+c+c*100+b*10+a)==1333){
				
				
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
