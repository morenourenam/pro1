// P12943:  Control C202C
/* 
// Pre: n >= 1
// Post: Retorna la resposta que més es repeteix i el nombre de vegades que es repeteix .
void recomtpe(int n);
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char resposta;
    int compt_a = 0;
    int compt_b = 0;
    int compt_c = 0;
    for(int i = 0; i<n; ++i){ //Comptar número de vegades que apareix cada resposta
        cin >> resposta;
        if(resposta == 'a') ++compt_a;
        else if (resposta == 'b') ++compt_b;
        else if (resposta == 'c') ++compt_c;
    }
    if((compt_a >= compt_b) and (compt_a >= compt_c)) {
        cout << "majoria de a" << endl << compt_a << " repeticio(ns)" << endl; }
    else if((compt_b > compt_a) and (compt_b >= compt_c)) {
        cout << "majoria de b" << endl << compt_b << " repeticio(ns)" << endl;}
    else {
        cout << "majoria de c" << endl << compt_c << " repeticio(ns)" << endl;}
}

