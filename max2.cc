#include <iostream>
using namespace std;

int max2 (int a, int b){
  int p;
  if (a >= b) p = a;
  else p = b;
  return p;
}
int main(){
  int a,b;
  while (cin >> a >> b){
    cout << max2(a,b) << endl;
  }
}
