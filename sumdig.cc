#include <iostream>
using namespace std;

int main(){
  int n;
  while (cin >> n){
    int sum = 0;
    int aux = n;
    while (aux > 0){
      sum = sum + aux%10;
      aux = aux/10;
    }
  cout << "La suma dels digits de " << n << " es " << sum << "." << endl;
  }
}