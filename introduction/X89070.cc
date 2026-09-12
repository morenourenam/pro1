//Sum of the minimum and the maximum of three integers
#include <iostream>
using namespace std;

 int main(){
    int x, y, z;
    cin >> x >> y >> z;
    if((x>y and z<y) or (z>y and x<y)){
        int sum = x+z;
        cout << sum << endl;
    }
    if((x>z and y<z) or (y>z and x<z)){
        int sum = y+x;
        cout << sum << endl;
    }
    if((z>x and y<x) or (y>x and z<x)) {
        int sum = y+z;
        cout << sum << endl;
    }
    

}
    