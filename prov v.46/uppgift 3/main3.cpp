// Anton Stenberg, uppgift 3
#include <iostream>
#include <string>
using namespace std;
int main ()
{
  string text;
  
  
  cout << "Mata in din text: " << endl;
  getline(cin, text);                                  // Det som skrivs in �r text
  cout << "Mata in tecken att leta efter: " << endl;
  
  string tecken;
  
  getline(cin, tecken);                                // Det som sedan skrivs in �r tecken
  
  int pos = text.find(tecken, 0);                // B�rjar leta vid starten (position 0)
  string ut = text.substr(pos, 4);               // ska ta med fyra tecken (pos, 4)
  
  cout << "\"" << ut << "\"" << " " << "plockas ut!" << endl;             // Skriver ut vilka tecken som plockats ut
  
  
  
 return 0; 
}
 
