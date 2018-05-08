#include <iostream>

#include <cmath>

using namespace std;

float  sct(float a,float b,float c) {
	
	float  y1,y2,s;
		
	s=b*b-4*a*c;
		
	y1=-b-sqrt(s);
	
	y2=-b+sqrt(s);
		
	return y1;
	
	return y2;
}

int main() {
	
    float  a,b,c,s;
	
	cin>>a>>b>>c;
	
	s=b*b-4*a*c;
	
cout <<sct(a,b,c)<<endl;

return 0;
	
	
} 
