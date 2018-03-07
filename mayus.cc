#include <iostream>
using namespace std;

int main(){
  char a;
  cin >> a;
  if (a >= 'a')
    a = a - 'a' + 'A';
  else
    a = a + 'a' - 'A';
  cout << a << endl;
}
 