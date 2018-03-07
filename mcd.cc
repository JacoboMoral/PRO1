#include <iostream>
using namespace std;

int main (){
  int a,b;
  cin >> a >> b;
  int x = a;
  int y = b;
  
  while (x != y){
    if (x > y) x = x - y;
    else y = y - x;
  }
  cout << "El mcd de " << a << " i " << b << " es " << x << "." << endl;
}