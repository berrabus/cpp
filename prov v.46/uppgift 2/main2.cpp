// Anton Stenberg, uppgift 2
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
  float tal1;                             // float f�r att det �r flyttal
  float tal2;
  float tal3;
  
  cout << "Mata in tre flyttal" << endl;
  cin >> tal1 >> tal2 >> tal3;             // talar om att tre tal matas in: tal1, tal2, tal3
  cout << "tal1: " << tal1 << endl;
  cout << "tal2: " << tal2 << endl;
  cout << "tal3: " << tal3 << endl;
  
  float medel = (tal1 + tal2 + tal3)/3; // medelv�rde �r lika med talen dividerade med antalet tal
  
  cout << "Medelv�rdet av " << tal1 << ", " << tal2 << "och " << tal3 << "blir " << fixed << setprecision(1) << medel << endl; // talar om via setprecision att det bara beh�vs en decimal
  
 return 0; 
}
 
