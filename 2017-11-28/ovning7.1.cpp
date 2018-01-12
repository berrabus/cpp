#include <iostream> 
using namespace std;
int main()
{
  char svar;
  cout << "Vill du testa en villkorssats? (j/n)" << endl;
  cin >> svar;
  if (svar == 'j')
    cout << "Du svarade ja. Det verkar fungera!" << endl;
  else
    cout << "Du svarade nej." << endl;
  
  return 0;
} 
  
