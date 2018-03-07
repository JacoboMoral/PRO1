#include <iostream>
using namespace std;

int main(){
  cout.setf(ios::fixed);
  cout.precision(6);
  int a;
  int sin;
  while (cin >> a){
    a = a * 0.0174532925;
    sin = a - a*a*a/6 + a*a*a*a*a/(6*4*5) + a*a*a*a*a*a*a/(6*4*5*6*7);
  }
  cout << sin << endl;
}