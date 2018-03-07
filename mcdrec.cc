#include <iostream>
using namespace std;

int mcd(int a, int b){
    while (a != b){
        if (a == 0) return b;
        else if (b == 0) return a;
        else if (b > a) return mcd (b,a);
	else if (a > b) return mcd (b,a%b);
    }
    return a;
}
int main (){
    int a,b;
    while (cin >> a >> b){
        cout << mcd (a,b) << endl;
    }
}
	