 #include <iostream> 
using namespace std;
int main()
{
  /*
   * datatyp variabelnamn;
   */
  int tal1; 
  int tal2;
  int tal3;
  // Plats f�r
             // en int
             // allokeras
             // (bokas)
             
 // antal = 4; // antal
             // tilldelas  
             // v�rdet 4
 // Inmatning fr�n tangentbord
 cout << "Mata in tre tal: ";
 cin >> tal1;
 cin >> tal2;
 cin >> tal3;
 int summa = tal1+tal2+tal3;
 /*
  * int summa;
  * summa = tal1+tal2;
  */
 cout << "Summan av talen blir " << summa << endl;
 /*
  * tal = tal+1;
  */
 
  return 0;
}
