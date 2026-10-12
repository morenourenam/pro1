//X65880:Letter or Number?
#include <iostream>
using namespace std;

int main() {
    char x;
    cin >> x;
    string tipo;
    if('A'<= x and 'Z' >= x) tipo = "Uppercase letter";
    if('a'<= x and 'z' >= x) tipo = "Lowercase letter";
    if('0'<= x and '9' >= x) tipo = "Number";

    cout << tipo << endl;
    
}