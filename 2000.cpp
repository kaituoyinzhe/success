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
	
	printf("公经过：%lf米\n第十次反弹：%lf米\n",sum,i);
	
	return 0;
}
