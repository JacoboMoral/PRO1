#include <iostream>
using namespace std;
MCD
int mcd (int a, int b){
  cin >> a;
  while (cin >> b){
    while (a != b){
      if (a > b) a = a - b;
      if (b > a) b = b - a;
    }
  }
  cout << a << endl;
}