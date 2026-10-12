// X80452: Stamps
/* 
// Pre: n > 19
// Post: Assigna a p i q els valors tals que n = 7p + 4q i p + q és mínim.
void calcula_segells(int n, int& p, int& q);
*/
#include <iostream>
using namespace std;

int main(){ //p són 7 cents i q són 4 cents
    int n;
    while(cin >> n){
        int p = n/7;
        while((n-7*p)%4 != 0){
            --p;
        }
        int q = (n-7*p)/4;
        cout << p << " " << q <<endl; 
    }

}

