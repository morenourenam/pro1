// P79784: Movements on the ground
/* 
// Pre: cert
// Post: Escriu la posició final, en el format "(x, y)", d'un objecte que
//       parteix de (0, 0) i fa els moviments de la seqüència de l'entrada,
//       que queda consumida.
void posicio_final();
*/
#include <iostream>
using namespace std;

int main(){
    char move;
    int pos_x = 0; //w=-1, e=+1
    int pos_y = 0; //n=-1, s=+1
    while(cin>>move){
        if(move=='n') --pos_y;
        else if(move=='s') ++pos_y;
        else if(move=='w') --pos_x;
        else ++pos_x;
    }
    cout << "(" << pos_x << ", " << pos_y << ")" << endl;
}

