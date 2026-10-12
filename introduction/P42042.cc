// P42042:Classification of characters (1)

#include <iostream>
using namespace std;

int main() {
    char x;
    cin >> x;
    string m;
    string n;
    if('A'<= x and 'Z'>=x) {
        m = "uppercase";
        if (x =='A' or x=='E' or x=='I' or x=='O' or x=='U')  n = "vowel";
        else n = "consonant";
    }

    if('a'<= x and 'z'>=x) {
        m = "lowercase";
        if (x == 'a' or x =='e' or x=='i' or x=='o' or x=='u') n = "vowel";
        else n = "consonant";
    }

    cout << m << endl << n << endl;
}