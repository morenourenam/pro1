// P38614:  Control C201A
/* 
// Pre: n >= 0
// Post: Retorna cert si i només si la suma dels dígits de n en posicions senars (comptant des de la dreta) és parell.
bool es_cool(int n);
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << n << " IS ";
    int i = 1;
    int sum = 0;
    while(n>0){ //Calcula la suma dels números impars
        int a = n%10;
        if(i%2 != 0) sum += a; 
        ++i;
        n/=10;
    }
    if(sum%2 == 0) cout << "COOL" << endl;
    else cout << "NOT COOL" << endl;
    
}

