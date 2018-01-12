// Ett första exempel
// Inkluderar "saker som finns i biblioteket iostream"
// bl. a. utskrift på skärmen
#include <iostream>

// I en namnrymd ingår olika bibliotek. Alla ingående bibliotek har olika namn
using namespace std;

int main()         // Här börjar programmet köra.
{  
   /*
   cout = "datorns standardutenhet", definierat i operativsystemet (skärmen)
   << är utmaningsoperatorn. (matar ut till skärmen)
   */
  cout << "\"Mitt första program"\" << endl << endl;     // Här skrivs en text till skärmen.
  cout << "ÅÄÖ åäö" << endl;
  // utskrift på flera rader
    cout << "Kod på två rader ";
    cout << "men utskrift på en rad" << endl;
    cout << endl;
    cout << "En rad kod," << endl << "utskrift på två";
    cout << endl;
  
  return 0;                           // Här avslutas programmet.
}

