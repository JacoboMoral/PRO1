#include <iostream>
using namespace std;

//Girar las cifras de un número
int main(){
  int n;
  cin >> n;
  
  while (n >= 10){
    // n tiene por lo menos dos digitos
    cout << n%10;
    n /=10;
  }
   cout << n << endl;   
}