#include <iostream>
#include <string>
using namespace std;

void reves (string a){
    while (cin >> a){
    cout << reves(a) << a;
    }
}
int main (){
  string a;
  reves(a);
}