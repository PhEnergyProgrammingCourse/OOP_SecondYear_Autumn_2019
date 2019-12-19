#include <iostream>
#include <cmath>
using namespace std;

int  main ()
{
     double W,P1,P2,l1,l2,n1,n2,N,z;
     cin>>  W>>P1>>P2>>l1>>l2;
     n1=cos(P1)*cos(P2)*cos(l1-l2);
     n2=sin(P1)*sin(P2);
     N=n1+n2;
     z=W*acos(N);
     cout<<z<<endl;
     return 0;
}
