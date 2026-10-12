// P64976: Control C201B
/* 
// Pre: n >= 0
// Post: Escriu les n primeres línies de la taula de multiplicar de n,
//       una per línia.
void taula_multiplicar(int n);
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; ++i){
        cout << n << " x " << i << " = " << n*i << endl;
    }
}

