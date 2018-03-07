#include <iostream>
using namespace std;
// tauler d'escacs
int main(){
  int a,b;
  cin >> a >> b;
  int sum=0;
  int c,s;	
  while (cin >> c){
      while (c > 9){
	s = c%10;
	c = c/10;
	sum = sum + s;
      }
      if (c < 9)
	sum = sum + s;
  }
    
    
    
  cout << sum << endl;
}