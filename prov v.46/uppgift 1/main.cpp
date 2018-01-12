// Anton Stenberg, uppgift 1
#include <iostream>
using namespace std;
int main ()
{
  char gemen;
  cout << "Mata in en gemen (liten bokstav)";
  cin >> gemen;                                         // gemen = liten bokstav, alltså den lilla bokstav man matar in då jag skrivit cin
  
  char versal = (int)gemen - 32;                        // jag talar om att en versal är en stor bokstav genom att skriva (int)gemen - 32. 
                                                        // Enligt Unicode-tabellen är alla gemeners motsvarande versaler på en position 32 steg mindre
  cout << "Motsvarande versal är: " << versal << endl;
  
  
  
 return 0; 
}
