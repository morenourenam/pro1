//Minimum of three different integers
#include <iostream>
using namespace std;

 int main(){
    int x, y, z;
    cin >> x >> y >> z;
    if (x>y or x>z){
        if (z>y){
            cout << y << endl;
        }
    }
    if (y>x or y>z){
        if (x>z){
            cout << z << endl;
        }
    }

    if (z>x or z>y){
        if (y>x){
            cout << x << endl;
        }
    }
}
    