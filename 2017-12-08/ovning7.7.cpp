#include <iostream> 
using namespace std;
int main()
{
 double behallning = 1000;
 double insattning, uttag;
 char val;
 cout << "MENY" << endl;
 cout << "1. insättning\n2. uttag\n3. visa behållning\n" << endl;
 
 cin>> val;
 switch (val)
 {
   case '1':
     cout << "Hur många kronor vill du sätta in?" << endl;
     cin >> insattning;
     behallning += insattning;
     break;
   case '2':
     cout << "Hur många kronor vill du ta ut?" << endl;
     cin >> uttag;
     if (uttag > behallning)
     {
       cout << "Du kan inte ta ut så mycket pengar!" << endl;
     }
     behallning -= uttag;
     break;
   case '3':
     break;
   default:
     cout << "Felinmatning" << endl;
}
  
  
  return 0;
}  
 
