//P59539 :  Harmonic numbers (1)
#include <iostream>
using namespace std;
int main(){
    double n;
    cin >> n;
    double H=0;
    for(double i=1;i<=n;++i){
        double hn = 1.0/i;
        H += hn;
    }

    cout.setf(ios::fixed);
    cout.precision(4);
    cout << H << endl;
}