#include <iostream> 
using namespace std;
int main()
{
  /*
   * datatyp variabelnamn;
   */
  int tal1; 
  int tal2;
  // Plats f�r
             // en int
             // allokeras
             // (bokas)
             
 // antal = 4; // antal
             // tilldelas  
             // v�rdet 4
 // Inmatning fr�n tangentbord
 cout << "Mata in ett heltal 1: ";
 cin >> tal1;
 cout << "Mata in ett heltal 2: ";
 cin >> tal2;
 int summa = tal1+tal2;
 /*
  * int summa;
  * summa = tal1+tal2;
  */
 cout << "Summan av talen blir " << summa << endl;
 cout << "Summan av talen blir " << tal1+tal2 << endl;
 /*
  * tal = tal+1;
  */
 
  return 0;
}