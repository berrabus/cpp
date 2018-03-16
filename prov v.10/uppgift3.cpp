// uppgift 3 Anton Stenberg
#include <iostream>
using namespace std;
int main ()
{
  int heltal;
  int tal;
  int n;
  cout << "Mata in heltal. 48-57, 65-90 och 97-122 är tillåtna" << endl;    // Instruktioner
  cout << "Hur många heltal vill du mata in?";
  cin >> heltal;
  
  
  if (heltal > 200 || heltal < 2)            // det ska inte funka om man matar in under 2 eller över 200 heltal
  {
    cout << "Du kan bara mata in mellan 2 och 200 heltal" << endl;
  } 
  
  for (int n; n < heltal; n++)
  { n++
    
    cout << "Mata in tal" << endl;
      cin >> tal;
      
      if ((tal > 47 && tal < 58) || (tal > 65 && tal <90) || (tal > 97 && tal < 122))        // tillåtna värden på heltalen
	                                                                                     // som jag skrev i instruktionerna
      {
	cout << 
      }
  }
	
	
  

  
 return 0; 
}

