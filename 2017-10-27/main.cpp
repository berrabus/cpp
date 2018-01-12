#include <iostream>
using namespace std;
int main()
{
 // Övning 4.5 (Prioritetsordning)m sidan 60
  // int tal = 5 + (6 % 4); // 7, osynliga parenteser
  // int tal = 5 + 6 % 4; // 7
  /* int tal = (5 + 6) % 4); // 3
  cout << tal << endl;*/
  
  
  
  // Exempel 4.2, sidan 55
  int tid = 800; // 800 s
  int min = tid / 60; // Antalet hela min som ryms i 800 s
  int s = tid % 60; //s som blir över
  cout << tid << " s = " << min << " min och " << s << " s\n";
  
  
  /*int tal=2;
  // tal tilldelas sitt eget värde (2) + 1
  // tal kommer att ha värdet 3
  // tal= tal + 1;
  // tal += 1;
  // cout << tal << endl;
  // tal= tal + 1;
  int tal2 = ++tal;
  cout << tal2 << endl;
  */
  
 /*float ft = 9; 
 float fn = 10;
 int t = 9; 
 int n = 10;
 
  
 cout << ft / fn << endl; 
 cout << t / n << endl; 
 cout << t % n << endl;
 */ 
 
 
  return 0;
}