// P50327:  Reversed number
/* 
// Pre: n >= 0
// Post: escriu el número al revés, incloent els 0 de la dreta.
void reversa(int n);
*/
#include <iostream>
using namespace std;

int main(){
    int n; 
    cin >> n; 
    if(n==0)cout << 0;
    else{
        while(n!=0){
            cout << n%10;
            n/=10;
            }
        }
    cout << endl;
}