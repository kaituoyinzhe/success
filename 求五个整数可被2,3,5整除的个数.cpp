#include  <stdio.h>

int main() {
	
	
	int a,b,c,d,e,l=0,k=0,j=0;
	
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
    if(a%2==0) l++;
    
    if(b%2==0) l++;
    
    if(c%2==0) l++;
    
    if(d%2==0) l++;
    
    if(e%2==0) l++;
    
    l=l;
    
    if(a%3==0) k++;
    
    if(b%3==0) k++;
    
    if(c%3==0) k++;
    
    if(d%3==0) k++;
    
    if(e%3==0) k++;
    
    k=k;
    
    if(a%5==0) j++;
    
    if(b%5==0) j++;
    
    if(c%5==0) j++;
    
    if(d%5==0) j++;
    
    if(e%5==0) j++;
    
    j=j;
	
	printf("%d\n%d\n%d\n",l,k,j);

	return 0;
	
	
}
