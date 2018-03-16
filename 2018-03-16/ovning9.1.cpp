#include <iostream>
using namespace std;

double basyta(double radieE);

int main ()
{
  double radie;
  cout << "Mata in radien ";
  cin >> radie;
  
  double area = basyta(radie);
  cout << "Basytans area är " << area;
  
 return 0; 
}

double basyta(double radieE)
{
  const double PI = 3.14159;
  double area = (PI*radieE*radieE);
  return area;
}