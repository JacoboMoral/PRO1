#include <iostream>
using namespace std;

int mcd (int a, int b){
    cin >> a;
    while (a != b){
      if (a > b) a = a - b;
      if (b > a) b = b - a;
    }
    return a;
  }
 

int mcm (int a, int b){
  return ((a/mcd(a,b)) * b);
}

int main (){
  int a,b,mcm;
  while (a != 0){
    cin >> a;
    while (cin >> b){
      mcm = ((a/mcd(a,b))*b);
      cout << mcm << endl;
    }
  }
}