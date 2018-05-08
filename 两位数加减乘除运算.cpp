#include <stdio.h>

#include <math.h>

int main() {
	
	float a,b;
	
	char ch;
	
	scanf("%f%c%f",&a,&ch,&b);
	
	switch(ch) {
		
		case '+':printf("a+b=%f\n" ,a+b);break;
		
		case '-':printf("a-b=%f\n" ,a-b);break; 
		
		case '*':printf("a*b=%f\n" ,a*b);break;
		
		case '/':printf("a/b=%f \n" ,a/b);break;
		
		default:printf("不是加减乘除运算");break;
		
		}
	
	return 0;
}
