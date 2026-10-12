// P32046:  Control C202F
/* 
// Pre: cert
// Post: Escriu, un per línia, els nombres de l'entrada que acaben amb les
//       mateixes tres xifres que primer, i després el seu recompte segons
//       el format "total: x". L'entrada queda consumida.
void escriu_coincidents(int primer);
*/
#include <iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;
    int nombres;
    cout << "nombres que acaben igual que " << n << ":" << endl;
    int compt = 0;
    while(cin>>nombres){
        if (n%1000==nombres%1000) {
            cout << nombres << endl;
            ++compt;
        }
    }
    cout << "total: " << compt << endl;
}

