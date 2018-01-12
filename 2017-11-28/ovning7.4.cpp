#include <iostream> 
using namespace std;
int main()
{
  double alder;
  cout << "Hur gammal är du?" << endl;
  cin >> alder;
  if (alder < 15 || alder > 65)
  {
    cout << "Det kostar 5 kronor för dig att åka buss." << endl;
  }
  else 
  {
    cout << "Det kostar 15 kronor för dig att åka buss." << endl;
  }
  
  return 0;
} 
 