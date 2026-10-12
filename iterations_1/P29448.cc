// P29448: Correct dates
/* 
// Pre:Cert
// Post: Retorna cert si i només si d/m/a és una data vàlida del calendari gregorià.
bool verificacio_data(int d, int m, int a);
*/
#include <iostream>
using namespace std;

int main(){
    int d,m,a;
    while(cin >> d >> m >> a){
        bool correct = true;
        bool leap = false;
        correct = (a >= 1800) and (a <= 9999) and (m >= 1) and (m <= 12);
        if (a%4==0){ //Determina si es leap year o no
            if (a%100 == 0){if ((a/100)%4 == 0) leap = true;}
            else leap = true;
        }
        if((d<=0) or (d>31)) correct = false;
        else {
            if((m==4) or (m==6) or (m==9) or (m==11) or (m==2) ){
                if(d>30) correct =false;
                if((m==2) and (d>29)) correct = false;
            }
            if(m==2) {
                 if ((d>=29) and (not leap)) correct = false;
            }
        }
        if (correct==false) cout << "Incorrect Date" << endl;
        else cout << "Correct Date" << endl;
    }
}

