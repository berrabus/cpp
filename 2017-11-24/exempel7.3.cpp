#include <iostream> 
using namespace std;
int main()
{
  double hojd;
  cout << "Ange pudelns markh�jd: ";
  cin >> hojd;
  if (hojd > 28 && hojd < 35)
  {
    cout << "Det �r en dv�rgpudel.";
  }
  else
  {
    cout << "Det �r inte en dv�rgpudel.";
  }
  
  return 0;
} 
 
