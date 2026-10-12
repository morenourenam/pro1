//P61634: Leap years 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string leap;
    if (n%4==0){
        if (n%100 == 0){
            if ((n/100)%4 == 0) leap = "YES";
            else leap = "NO";

        }

        else leap = "YES";

    }

    else leap = "NO";

    cout << leap << endl;
}