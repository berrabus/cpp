// Anton Stenberg, uppgift 1
#include <iostream>
using namespace std;
int main ()
{
  char gemen;
  cout << "Mata in en gemen (liten bokstav)";
  cin >> gemen;                                         // gemen = liten bokstav, allts� den lilla bokstav man matar in d� jag skrivit cin
  
  char versal = (int)gemen - 32;                        // jag talar om att en versal �r en stor bokstav genom att skriva (int)gemen - 32. 
                                                        // Enligt Unicode-tabellen �r alla gemeners motsvarande versaler p� en position 32 steg mindre
  cout << "Motsvarande versal �r: " << versal << endl;
  
  
  
 return 0; 
}
