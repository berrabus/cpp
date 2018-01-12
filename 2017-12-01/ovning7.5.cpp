#include <iostream> 
using namespace std;
int main()
{
  double langd, vind;
  cout << "Hur många meter hoppade du? ";
  cin >> langd;
  cout << "Hur många meter per sekund blåste det? ";
  cin >> vind;
  if (langd > 7.92 && vind <= 2)
  {
    cout << "Grattis!" << endl;
  }
  
  return 0;
} 