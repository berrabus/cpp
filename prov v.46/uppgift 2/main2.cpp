// Anton Stenberg, uppgift 2
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
  float tal1;                             // float för att det är flyttal
  float tal2;
  float tal3;
  
  cout << "Mata in tre flyttal" << endl;
  cin >> tal1 >> tal2 >> tal3;             // talar om att tre tal matas in: tal1, tal2, tal3
  cout << "tal1: " << tal1 << endl;
  cout << "tal2: " << tal2 << endl;
  cout << "tal3: " << tal3 << endl;
  
  float medel = (tal1 + tal2 + tal3)/3; // medelvärde är lika med talen dividerade med antalet tal
  
  cout << "Medelvärdet av " << tal1 << ", " << tal2 << "och " << tal3 << "blir " << fixed << setprecision(1) << medel << endl; // talar om via setprecision att det bara behövs en decimal
  
 return 0; 
}
 
