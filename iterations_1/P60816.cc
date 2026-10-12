// P60816: Reversed number in hexadecimal
#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    if(num == 0) cout << 0;
    else{
        while (num > 0){
            int r = num%16;
            if(r<10) cout << r;
            else cout << char(r-10 + 'A');
            num/=16;
        }
    }   
    cout << endl;
}