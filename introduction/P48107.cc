//P48107: Integer division and remainder of two natural numbers 
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int d = a/b;
    int r = a%b;
    cout << d << " " << r << endl;
}