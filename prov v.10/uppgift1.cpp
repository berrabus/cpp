// Anton Stenberg, uppgift 1

/*
// 1a
#include <iostream>
using namespace std;
int main ()
{
  int tal[11];        //plats för 11 värden, då -10 - 0 är 11 värden
  
  for (int n=-11 ; n < 0; n++)       // "räkningen" börjar på 11 och det får inte gå över 0
  {
    tal[n] = (n+1);
    cout << tal[n] << ' ';     // såhär skrivs det ut, använder ' ' för att det ska vara mellanrum mellan talen
  }
  
 return 0; 
}
*/

/*
//1b
#include <iostream>
using namespace std;
int main ()
{
  int tal = -13; // startvärdet -13, då den ökar med tre varje gång och på så sätt får man med -10
  
  while (tal < 8)  // 8 ska varadet sista tal som skrivs ut, därav tal < 8
  {
    tal = (tal + 3);  // ökar med 3 för varje gång
    cout << tal << ' ';   // såhär skrivs det ut, använder ' ' för att det ska vara mellanrum mellan talen
  }
  
  
 return 0; 
}
*/