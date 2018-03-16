// Uppgift 2 Anton Stenberg
#include <iostream>
using namespace std;
int main ()
{
  for (int m = 1 ; m <= 20 ; m++)    // m = 1 och m++ gör attdet bara blir 1 eller 0 som skrivs ut. m <= 20 gör antalet rader
  {
    
    for (int n = 1 ; n <= 10 ; n++)  // n <= 10 gör hur många gånger det skrivs ut(10ggr),
                                     // i.o.m. att både 0 och 1 skrivs ut på en "omgång" 
                                     // gör jag så att det bara skrivs ut 10 gånger då 10*2=20
  {
    cout << 0 << 1;                  // utskriften
  }
  
  cout << endl;                      // gör nya rader i.o.m. endl
  }
  
 return 0; 
}
