 #include <iostream>
using namespace std;
int main()
{
  int c = 4;
  int d = c++; // d till delas v�rdet 4, d�refter f�r c v�rdet 5
  cout << "c = " << c << ", d = " << d << endl;
  int e = ++c; // c f�r v�rdet 6, d�refter tilldelas e v�rdet 6
  cout << "c = " << c << ", e = " << e << endl;
  
  
  return 0;
}
