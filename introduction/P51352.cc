//P51352: Elementos
#include <iostream>
using namespace std;

int main() {
	char X, Y;//A>P, P>V, V>A
	cin >> X >> Y;
    if(X==Y) cout << "-";
	else if(((X=='A') and (Y=='P')) or ((X=='P') and (Y=='V')) or ((X=='V') and (Y=='A'))) cout << "1";
    else cout << "2";
    cout << endl;
    }
