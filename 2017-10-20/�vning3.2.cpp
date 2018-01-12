#include <iostream>
using namespace std;
int main ()
{
  
  int tal[3];
  
  cout << "Mata in tre heltal ";
  cin >> tal[0] >> tal[1] >> tal[2] >> tal[3];
  
  int temp = tal[0];
  tal[2] = tal[2];
  tal[2] = temp;
  
  cout << "Innehåll i fältet" << tal[0] << ' ' << tal[1] << ' ' << tal[2] << endl;
  
  tal[3] = tal[1];
  
  tal[1] = tal[2];
  
  tal[2] = tal[3];
  
  
  cout << "Innehåll i fältet efter bytet: "
       << tal[1] << ' ' << tal[3] << endl;
  
  
  return 0;
}