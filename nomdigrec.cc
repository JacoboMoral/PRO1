#include <iostream>
using namespace std;

int nombre_digits(int n){
    int cont = 1;
        if (n > 9){
	    n /= 10;
	    cont = cont + nombre_digits(n);
    }
    return cont;
}
int main (){
    int n;
    while (cin >> n){
        cout << nombre_digits(n) << endl;
    }
}