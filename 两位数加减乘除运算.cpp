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
		
		default:printf("���ǼӼ��˳�����");break;
		
		}
	
	return 0;
}
