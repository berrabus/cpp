#include <iostream>
using namespace std;
int main()
{
 int manader;
 cin >> manader;
 int ar = manader / 12;
 
 int extramanader = manader % 12;
 
 cout <<  manader << "m�nader " << ar << " �r och " << extramanader << " m�nader " << endl;
  
  return 0;
}
