// P65171:  Control C202B
/* 
// Pre: n >= 2
// Post: Retorna la variança de n nombres.
double variança(int n);
*/
#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(2);
    int n;
    cin >> n;
    double x;
    double atotal = 0;
    double btotal = 0;
    for(int i = 0; i<n; ++i){ //fórmula= 1/(n-1)*atotal - 1/n(n-1)*btotal*btotal
        cin >> x;
        atotal += x*x;
        btotal += x;
        }
    cout << atotal/(n-1) - btotal*btotal/(n*(n-1)) << endl;
    }

