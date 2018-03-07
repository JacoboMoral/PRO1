#include <iostream>
using namespace std;

int suma_digits(int n){
      if (n < 10) return n;
      else return (n%10 + suma_digits(n/10));
      
}
bool es_multiple_3(int n){
     if (n < 10 ) return (n == 3 or n == 6 or n == 9);
     else return (es_multiple_3(suma_digits(n)));
}
  
int main (){
    int n;
    while (cin >> n){
        cout << es_multiple_3(n) << endl;
    }
}