#include <iostream>
#include <cmath>

using namespace std;
int f (int a, int b) {
    while (a!=0 && b!=0) {
        if (a>b) {
            a=a%b;
        }
        else b=b%a;
    }
    return a+b;
}
int main()
{
    long x1,x2,y1,y2,p;
 cin >> x1 >> y1 >> x2 >> y2;
 x2-=x1; x2=abs(x2);
 y2-=y1; y2=abs(y2);
 if (x2<y2) p=f(x2,y2);
 else p=f(y2,x2);
 cout << p+1 << endl;
 return 0;
}
