#include <iostream>
using namespace std;

int main(){
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  if (b > c){
    if (a < c and b > d)
      cout << "[" << c << "," << d << "]" << endl;
    else if (a > c and b < d)
      cout << "[" << a << "," << b << "]" << endl;
    else if (a < c and b < d)
      cout << "[" << c << "," << b << "]" << endl;
    else if (a > c and b > d)
      if (a == d)
	cout << "[" << a << "," << d << "]" << endl;
	else
          cout << "[]" << endl;
    else if (a == c and b > d)
      cout << "[" << c << "," << d << "]" << endl; 
    else if (a < c and b == d)
      cout << "[" << c << "," << d << "]" << endl;
    else if (a > c and b ==d)
      cout << "[" << a << "," << d << "]" << endl;
    else if (a == c and b < d)
      cout << "[" << a << "," << b << "]" << endl;
  }
  else
    if (b < c)
       cout << "[" << "]" << endl;
    if (b == d and a == c)
       cout << "[" << a << "," << b << "]" << endl;
 
    if (b == c) 
       cout << "[" << b << "," << c << "]" << endl;
 
  
}