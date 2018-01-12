 #include <iostream>
using namespace std;
int main()
{
  int c = 4;
  int d = c++; // d till delas värdet 4, därefter får c värdet 5
  cout << "c = " << c << ", d = " << d << endl;
  int e = ++c; // c får värdet 6, därefter tilldelas e värdet 6
  cout << "c = " << c << ", e = " << e << endl;
  
  
  return 0;
}
