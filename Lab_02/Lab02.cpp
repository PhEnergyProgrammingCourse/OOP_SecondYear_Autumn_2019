#include <iostream>

struct Point
{
  float x;
  float y;
};

int main()
{
  std::cout << "Add an triangle point:" << std::endl;
  Point point1;
  std::cin >> point1.x >> point1.y;
  std::cout << "Add an triangle point:" << std::endl;
  Point point2;
  std::cin >> point2.x >> point2.y;
  std::cout << "Add an triangle point:" << std::endl;
  Point point3;
  std::cin >> point3.x >> point3.y;

  std::cout << "Add an point to check:" << std::endl;
  Point point0;
  std::cin >> point0.x >> point0.y;

  float a = (point1.x - point0.x)* (point2.y - point1.y) - (point2.x - point1.x) * (point1.y - point0.y);
  float b = (point2.x - point0.x)* (point3.y - point2.y) - (point3.x - point2.x) * (point2.y - point0.y);
  float c = (point3.x - point0.x)* (point1.y - point3.y) - (point1.x - point3.x) * (point3.y - point0.y);

  if (a == b && b == c) { std::cout << 0 << std::endl; }
  else if (a == 0 || b == 0 || c == 0) { std::cout << 2 << std::endl; }
  else { std::cout << 1 << std::endl; }
  system("pause");
  return 0;
}
