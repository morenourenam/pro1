// P85370: Interest (1)
/* 
// Pre: c > 0, i > 0, t > 0
// Post: Retorna el capital final després de t anys d'interès simple
//       del i% anual sobre un capital inicial c.
double capital_simple(double c, double i, int t) {
    // aquí va el teu càlcul del cas simple
}

// Pre: c > 0, i > 0, t > 0
// Post: Retorna el capital final després de t anys d'interès compost
//       del i% anual sobre un capital inicial c.
double capital_compost(double c, double i, int t) {
    // aquí va el teu bucle del cas compost
}
*/
#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(4);
    double c,i;
    int t;
    string tipus;
    cin >> c >> i >> t >> tipus;
    double capital_final = c;
    if (tipus == "simple"){
        capital_final += c*(i/100) * t;
    }
    else if (tipus == "compound"){
        for(int a = t; a>0; --a){
            capital_final += c*(i/100);
            c=capital_final;
        }
    }
    cout << capital_final << endl;
}

