#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
 
 
int main()
{
   int k1, k2, m1, m2, d, L, R;
    std:: cout << "dolg 1 = ";
   std:: cin>>k1;
   std:: cout << "dolg 2 = ";
   std:: cin >> k2;
   std:: cout << "shir 1 = ";
   std:: cin >> m1;
   std:: cout << "shir 2 = ";
   std:: cin >> m2;
   d=40000;
   R=d/(2*3.14);
   L=2*R*asin(sqrt((sin((k1-k2)*3.14/360))*(sin((k1-k2)*3.14/360))+cos(k1*3.14/180)*cos(k2*3.14/180)*(sin((m1-m2)*3.14/360))*(sin((m1-m2)*3.14/360))));
   std::cout << "rasstoyanie = " << L;
   return 0;
}
