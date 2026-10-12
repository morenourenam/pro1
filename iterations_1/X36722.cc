// X36722:  Exchange rates
/* 
// Pre: conversio > 0
// Post: Retorna la suma, en euros, de tots els valors de l'entrada,
//       que queda consumida.
double suma(double conversio);
*/
#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(4);
    double conversio;
    cin >> conversio;
    double diners;
    string tipus;
    double euros = 0;
    while(cin>>diners>>tipus){
        if(tipus == "EUR"){
            euros+=diners; //Suma al balanç d'euros
        }
        else{
            euros+=diners/conversio;
        }
    }
    cout << euros << " " << euros*conversio << endl;
}

