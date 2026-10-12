// P67723:   Greatest common divisor
/* 
// Pre: a > 0, b > 0
// Post: Retorna el més gran dels números que divideixen a i b.
int mcd(int a, int b);
*/
#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    cout << "The gcd of " << a << " and " << b << " is ";
    while(b!=0){
        int r = a%b;
        a = b;
        b = r;
    }
    cout << a << "." << endl;
}