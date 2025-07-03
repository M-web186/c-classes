#include<iostream>
using namespace std;

int areaRectangle(int width, int length)
{
   int area = width * length;
   return area;
}

int perimeterRectangle(int width, int loength)
{
   int perimeter = 2*(width + length);
   return perimeter;
}

int main()
{
  int width = 4;
  int length = 8;
  cout << "Area = " << 
           areaRectangle(width, length) << 
           endl;
  cout << "Perimeter = " << 
           perimeterRectangle(width, length);
  return 0;
}
