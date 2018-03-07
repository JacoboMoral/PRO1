#include <iostream>
using namespace std;

// Contar a's en una sec de caracteres acabada en .
int main (){
  //contador de a's
  int nas=0;
  char c;
  cin >> c;
  while (c != '.'){
    if (c == 'a') nas++;
    cin >> c;
  }
  cout << nas << endl;
}
  