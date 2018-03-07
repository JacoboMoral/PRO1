#include <iostream>
using namespace std;

int main (){
  char c;
  int n;
  cin >> n;
  int counta=0;
  int countb=0;
  int countc=0;
  while (n != 0){
    cin >> c;
    if (c == 'a'){
      counta = counta + 1;
    }
    else if (c == 'b'){
      countb = countb + 1;
    }
    else {
      countc = countc + 1;
    }
    --n;
  }
  if (counta >= countb and counta >= countc){
    cout << "majoria de a" << endl;
    cout << counta << " repeticio(ns)" << endl;
  }
  else if (countb > counta and countb >= countc){
    cout << "majoria de b" << endl;
    cout << countb << " repeticio(ns)" << endl;
  }
  else  {
    cout << "majoria de c" << endl;
    cout << countc << " repeticio(ns)" << endl;
  }
}