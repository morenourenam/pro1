// P97156: Reversed number in binary

/*
int main() {
    int num;
    cin >> num; 
    if (num == 0) cout << 0;
    else{
        while (num != 0){
            int r = num%2;
            cout << r;
            num= num/2;
        }
    }
    cout << endl;
}*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n > 1) {
        cout << n%2;
        n /= 2;
    }
    cout << n << endl;
}