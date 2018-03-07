#include <iostream>
#include <string>
using namespace std;

int main(){
  string c1,c2;
  cin >> c1 >> c2;
  if (c1 == c2) 
    cout << c1 << " = " << c2 << endl;
  else 
    if (c1 > c2)
      cout << c1 << " > " << c2 << endl;
  else 
    if (c1 < c2)
      cout << c1 << " < " << c2 << endl;
}
 