// Ett f�rsta exempel
// Inkluderar "saker som finns i biblioteket iostream"
// bl. a. utskrift p� sk�rmen
#include <iostream>

// I en namnrymd ing�r olika bibliotek. Alla ing�ende bibliotek har olika namn
using namespace std;

int main()         // H�r b�rjar programmet k�ra.
{  
   /*
   cout = "datorns standardutenhet", definierat i operativsystemet (sk�rmen)
   << �r utmaningsoperatorn. (matar ut till sk�rmen)
   */
  cout << "\"Mitt f�rsta program"\" << endl << endl;     // H�r skrivs en text till sk�rmen.
  cout << "��� ���" << endl;
  // utskrift p� flera rader
    cout << "Kod p� tv� rader ";
    cout << "men utskrift p� en rad" << endl;
    cout << endl;
    cout << "En rad kod," << endl << "utskrift p� tv�";
    cout << endl;
  
  return 0;                           // H�r avslutas programmet.
}

