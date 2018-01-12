#include <iostream> 
using namespace std;
int main()
{
  // iteration (loop)
  // med for-sats
  // 8.1, sidan 105
  
  
  cout << "Med for-sats" << endl;
  //    (startvärde; villkor; förändring
  for (int n=0; n<10; n++)
  {
    cout << "(for) n=" << n << endl;
  }
  
  cout << "Med while-sats" << endl;
  int o=0;
  while (o<10)  
  {
    cout << "(while) n=" << o << endl;
    o++; // o=o+1;
  }
  
  /*
  while (1>2)  
  {
    cout << "Sant 1 (while)" << endl;
    cout << "Sant 2 (while)" << endl;
  }
  
  do {
    
    cout << "Sant 1 (do while)" << endl;
    cout << "Sant 2 (do while)" << endl;
    
  } while (1>2);
  */
  return 0;
}  
 