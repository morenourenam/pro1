// P55622: Número de cifras
/* Pre: n >= 1, 2 <= base <= 16
   Post: Retorna el nombre de xifres necessàries per representar n en base base.
int nombre_xifres(int n, int base);*/
#include <iostream>
using namespace std;

int main(){
    int k; // 15
    cin >> k; 
    for(int x = 2; x <= 16; ++x){
        int d = k;
        int y = 1;
        while(d/x > 0){
            d/=x;
            ++y;
        }
        cout << "Base " << x << ": " << y << " cifras." << endl;
    }
}