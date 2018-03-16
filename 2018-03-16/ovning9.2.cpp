#include <iostream>
using namespace std;

double basyta(double radie);
double volymCylinder(double radie, double hojd);

int main ()
{
  double radie;
  double hojd;
  cout << "Mata in radien o höjden ";
  cin >> radie >> hojd;
  
  double area = basyta(radie);
  double volym = volymCylinder(radie, hojd);
  cout << "Basytans area är " << area << endl;
  cout << "Cylinderns volym är " << volym << endl;
 return 0; 
}

double basyta(double radie)
{
  const double PI = 3.14159;
  double area = (PI*radie*radie);
  return area;
}

double volymCylinder(double radie, double hojd)
{
  const double PI = 3.14159;
  double volym = (PI*radie*radie*hojd);
  return volym;
}
