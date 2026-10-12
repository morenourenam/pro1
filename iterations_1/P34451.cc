// P34451:  Control C201C
/* 
// Pre: x > 0
// Post: Retorna el nombre de numeros de la seqüència que són multiples de x.
int múltiple(int x);
*/
#include <iostream>
using namespace std;

int main(){
    int x, seq;
    cin >> x;
    int i = 0;
    while(cin>>seq){
        if(seq%x==0) ++i;
    }
    cout <<i<<endl; 
}

