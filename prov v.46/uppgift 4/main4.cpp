// Anton Stenberg, uppgift 4
#include <iostream>
using namespace std;
int main ()
{
  int timmar;
  int minuter;
  int sekunder;
  
  cout << "Mata in timmar, minuter och sekunder. Anv�nd heltal " << endl;
  cin >> timmar >> minuter >> sekunder;
  
  cout << "Timmar: " << endl;                    
  cout << timmar << endl;                // timmar = Timmar:
  cout << "Minuter: " << endl;
  cout << minuter << endl;               // minuter = Minuter:    
  cout << "Sekunder: " << endl;
  cout << sekunder << endl;              // sekunder = Sekunder:
  
  
  minuter = minuter + sekunder/60;       // minuter = antal minuter plus �verblivna sekunder (om sekundantalet �r �ver 60)
  sekunder = sekunder%60;                // Resten n�r man dividerar sekunderna med 60
  timmar = timmar + minuter/60;          // timmarna blir antal timmar plus �verblina minuter om antalet �r �ver 60
  minuter = minuter%60;                  // resten av minuterna n�r man delar dem med 60
  
  cout << "Den inmatade tiden motsvaras av " << timmar << "timmar, " << minuter << "minuter och " << sekunder << "sekunder" << endl; // Skriver ut resultatet i timmar,
                                                                                                                                     // minuter(antal under 60) och sekunder
                                                                                                                                     // (antal under 60
  
 return 0; 
}
 
