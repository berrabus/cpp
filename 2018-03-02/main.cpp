#include <iostream> 
using namespace std;
int main()
{
  if ( ((true) && (false)) && ((false) || (true)) )
    cout << "HEJ!" << endl;
  
  else if (false)
    cout << "Hej igen" << endl;
  else
    cout << "Allt var falskt" << endl;
  return 0;
}   
