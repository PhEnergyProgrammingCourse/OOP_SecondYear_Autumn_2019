#include<iostream>
#include <cmath>
using namespace std;
int main ()
{
  double R,Q1,Q2,l1,l2,x1,x2,X,c;
  cin >>R>>Q1>>Q2>>l1>>l2;
  x1=cos(Q1)*cos(Q2)*cos(l1-l2);
  X=x1+x2;
  c=R*acos(X)
  cout<<c<<endl;
  system ("pause");
return 0;
}
