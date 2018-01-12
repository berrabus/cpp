#include <iostream> 
#include <iomanip> 
using namespace std;
int main()
{
  const double pris = 9.9;
  int antal;
  double rabatt;
  cout << "Hur många skivor vill du köpa? ";
  cin >> antal;
  if (antal < 10)
  {
    rabatt = 1;
  }
  else if (antal < 50)
  {
    rabatt = 0.95;
  }
  else if (antal < 100)
  {
    rabatt = 0.9;
  }
  else
  {
    rabatt = 0.85;
  }
  cout << "Om du vill köpa " << antal << " skivor, kostar det " << rabatt*(antal*pris) << " kronor." << endl;
  
  return 0;
}  
