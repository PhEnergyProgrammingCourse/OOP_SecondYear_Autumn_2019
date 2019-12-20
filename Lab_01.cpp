#include <iostream> 
#include <cmath> 
using namespace std; 
int main()
{  double a1, a2, b1, b2, h, r; 
cin>>a1>>b1>>a2>>b2; 
a1 = a1*(3.141592653/180); 
a2 = a2*(3.141592653/180);  
b1 = b1*(3.141592653/180); 
b2 = b2*(3.141592653/180); 
r = 6371;  
double s1, s2, s3, s4, s5; 
s1 = sin((a2-a1)/2);
s2 = sin((b2-b1)/2);  
s3 = cos(a2)*cos(a1);  
s4 = sqrt(s1*s1 + s2*s2*s3); 
s5 = 2*r*asin(s4);  
cout << s5; }
