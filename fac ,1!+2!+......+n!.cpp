#include <stdio.h>

long fac(int n) { 

    long f=1 ;
    
    if(n<0) f=0;
    
    for (;n>0;n--)
      	
      	f*=n;
      	
    return f;
    
}
	 
	 int main() {
	 	 
	 	 int n,k;
	 	 
	 	 long  sum=0;
	 	 
	 	 scanf("%d",&n);
	 	 
	 	 for (k=1;k<=n;k++)
	 	 
	 	 sum+=fac(k);
	 	 
	 	 printf("n=%d,sum=%ld\n",n,sum);
	 	 
	 	 return 0;
	 	
	 }
