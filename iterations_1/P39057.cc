// P39057:Computing areas
/* 
// Pre: llargada > 0, amplada > 0
// Post: Retorna l'àrea d'un rectangle de les dimensions donades.
double area_rectangle(double llargada, double amplada);

// Pre: radi > 0
// Post: Retorna l'àrea d'un cercle del radi donat.
double area_cercle(double radi);
*/
#include <iostream>
using namespace std;

int main(){ 
    cout.setf(ios::fixed);
    cout.precision(6);
    int n;
    cin >> n;
    for(int i=0; i<n;++i){
        string figura;
        cin >> figura;
        if(figura=="rectangle"){
            double x,y;
            cin >> x >> y;
            cout << x*y << endl;
        }
        else{
            double r;
            cin >> r;
            cout <<  3.14159265358979*r*r << endl;
        }
    }

}

