#include <iostream>
using namespace std;
// problema del rombo

int main (){
  int n;
  cin >> n;
  int aux=0;
  // primera part del rombe
  while (aux < n){
    int c=0;
    int s=0;
    while (s < (n - aux - 1)){
      cout << ' ';
      ++s;
    }
    while (c < (2*aux + 1)){
      cout << '*';
      ++c;
    }
    cout << endl;
    ++aux;
  }
 // segona part del rombe
  int aux2=(n+1);
  int h=(2*n - 3);
  int aux3 = n-0;
  while ((aux2 > n) and (aux2 < (2*n))){
    int c2 = 0;
    int s2 = (n - 1);
    while (s2 < aux3){
      cout << ' ';
      ++s2;
    }
    while (c2 < h){
      cout << '*';
      ++c2;
    }
    cout <<endl;
    ++aux2;
    h = h-2;
    aux3 = aux3 + 1;
  }
       

  //s repressenten espais i n els asteriscs
}
