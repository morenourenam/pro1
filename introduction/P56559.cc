#include <iostream>
using namespace std;

int main() {
    int a1,b1,a2,b2; //[a1,b1], [a2,b2]
    cin >> a1 >> b1 >> a2 >> b2;
    string s;
    if (a1==a2 and b1==b2) s= "=";
    else if (a1>=a2 and b1<=b2) s= "1";
    else if (a2>=a1 and b2<=b1) s= "2";
    else s="?";

    cout << s << endl;
}