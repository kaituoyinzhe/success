#include <stdio.h> 

float  act(int  i) {
	
	int j;
	
	float k=1;
	
	for(j=1;j<=i;j++)
	
		k=k*j;
		
	return k;
}

float get (int i,int j) {
	
	float k;
	
	k=act(j)/(act(i)*act(j-i));
	
	return k;
}

int main () {
	
	int  j,k,i=0,n;
	
	while (i<=0||i>16) {
		
		printf("请输入打印的行数：");
		
		scanf("%d",&i); 
	}
	
	printf("%d行杨辉三角：",i);
	
	for(j=0;j<i;j++){
		
		for(k=1;k<=(i-j);k++)
		
			printf(" ");
		
		for(n=0;n<=j;n++)
			
			printf("%4.0f",get(n,j))	;
			
		printf("\n");
	
	}
			
	printf(" \n\n");
	
	
	return 0;
}
