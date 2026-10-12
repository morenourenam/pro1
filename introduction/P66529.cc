//P66529: //Interessos (2)
#include <iostream>
using namespace std;

int main() {
	double i;
    string tipus;
    cin >> i >> tipus;
    double n = 0;
    if(tipus == "setmanal") n=52;
    else if(tipus == "mensual") n=12;
    else if(tipus == "trimestral") n=4;
    else if(tipus == "semestral") n=2;
    double a = i/(100*n);
    double b = 1;
    while(n>0){
        b = b * (1+a);
        --n;
    }
    double TAE = 100 * (b-1) ;
    cout.setf(ios::fixed);
    cout.precision(4);
    cout << TAE << endl;
    }