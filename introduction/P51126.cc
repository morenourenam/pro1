//P51126: Intervals(1)
#include <iostream>
using namespace std;
/*
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int n, m;

    if (a > c)
        n = a;
    else
        n = c;

    if (b < d)
        m = b;
    else
        m = d;

    if (n > m)
        cout << "[]" << endl;
    else
        cout << "[" << n << "," << m << "]" << endl;
}
*/
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int n,m;
    if (a > c) {
        if (a > d) cout << "[" << "]" << endl;
        else {
            n = a;
            if (b > d) m = d;
            else m = b;
        cout << "[" << n << "," << m << "]" << endl;
        }
    }
    else {
        if (c > b) cout << "[" << "]" << endl;
        else {
            n = c;
            if (d > b) m = b;
            else m = d;
        cout << "[" << n << "," << m << "]" << endl;
        }
    }
}