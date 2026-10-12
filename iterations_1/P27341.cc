// P27341:  Control C202D
/* 
// Pre: cert
// Post: Retorna la suma dels cubs dels enters de a a b, ambdós inclosos (0 si a > b).
int suma_de_cubs(int a, int b);
*/
#include <iostream>
using namespace std;

int main(){
    int a,b;
    while(cin >> a >> b){
        int suma_cubs = 0;
        for(int i = a; i<=b; ++i){
            suma_cubs += i*i*i;
        }
        cout << "suma dels cubs entre " << a << " i " << b << ": "<< suma_cubs << endl;
    }

}

