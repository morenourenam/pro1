//P59875 :  Top to bottom
#include <iostream>
using namespace std;

int main () {
    int x,y;
    cin >> x >> y;
    int i = 0;
    int b = x;
    int s = y;
    if(y > x) {b = y; s = x;}
    while (b >= s) {
        cout << b << endl;
        b = b - 1;
    }
}