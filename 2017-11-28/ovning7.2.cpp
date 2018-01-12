#include <iostream> 
using namespace std;
int main()
{
  double bensin;
  cout << "Hur stort antal liter bensin finns det i tanken?" << endl;
  cin >> bensin;
  if (bensin < 10)
  {
    cout << "Du borde tanka. ";
    cout << "Du kan fylla på " << (50 - bensin) << " liter bensin. " << "Det kostar " << 9.5*(50 - bensin) << " kronor att få full tank" << endl;
    /*cout << "Det kostar " << (50 - bensin)*9,5 << " kronor." << endl;*/
  }
  else
  {
    cout << "Du kan köra vidare." << endl;
  }
  
  return 0;
} 
  
