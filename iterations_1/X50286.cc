// X50286: How many hello?
/* 
// Pre: cert
// Post: Retorna el nombre de vegades que apareix la paraula "hello" en la
   seqüència de paraules de l'entrada, que queda consumida.
int compta_hellos();
*/
#include <iostream>
using namespace std;

int main(){
    string paraula;  
    int compt = 0;
    while(cin>>paraula){
        if(paraula == "hello") ++compt;
    }
    cout << compt << endl;
}