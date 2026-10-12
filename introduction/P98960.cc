//Uppercase and lowercase letters
#include <iostream>
using namespace std;

int main() {
    char x;
    cin >> x;
    char convert;
    if ('A'<= x and 'Z' >= x) {
        convert = ('a'- 'A' + x);
    }

    else if ('a'<= x and 'z' >= x) {
        convert = (x + 'A'- 'a');
    }
    
    cout << convert << endl;
}