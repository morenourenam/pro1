// X32391: Allowance (2)
/* 
// Pre: d >= 0, n >= 0, t > 0
// Post: Retorna quantes de les t setmanes acaben amb saldo estrictament
//       positiu, partint d'uns estalvis inicials n, amb unes despeses
//       setmanals d i les t pagues llegides de l'entrada, que queda
//       consumida.
int setmanes_positives(int d, int n, int t);
*/
#include <iostream>
using namespace std;

int main(){
    int d, n, t;
    cin >> d >> n >> t;
    int compt = 0;
    int balanc = n;
    for(int i = 0; i<t; ++i){
        int a;
        cin>>a;
        balanc += -d + a;
        if(balanc>0) ++compt;
    }
    cout << compt << endl;
}

