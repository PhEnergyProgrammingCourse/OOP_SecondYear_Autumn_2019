
#include <iostream>
using namespace std;

int main()
{
 long int x1, y1, x2, y2;
 cin >> x1 >> y1 >> x2 >> y2;
 unsigned int answer = 0;
 for (int i = ((x1 < x2) ? x1 : x2) + 1; i < ((x1 > x2) ? x1 : x2); i++)
 {
  long double cor = (i - x1)*(y2 - y1) / ((double)(x2 - x1)) + y1;
  if (int(cor) == cor)
   answer++;
 }
 cout << answer;
 system("pause");
 return 0;
}
