#include <stdio.h>

int main() {
	
	double i,sum=0,b=1;
	
	for(i=100;i!=0;) {
		
		sum=i+sum+(i/2);
		
		b++;
		
		if(b==10)
		
			break;
			
		i=i/2;
		
	}
	
	printf("��������%lf��\n��ʮ�η�����%lf��\n",sum,i);
	
	return 0;
}
