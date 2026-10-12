//Rounding P92613
#include <iostream>
using namespace std;

int main() {
    double x;
    cin >> x;
    int floor;
    int ceiling;
    int rounding;

    if (type(x)==int){
        int floor = x;
        int ceiling = x;
        int rounding = x;
    }
    else if (type(x)==double) {
        int x;
        int floor = x;
        int ceiling = x + 1; 
    }
    cout << floor << ceiling << rounding << endl;
}