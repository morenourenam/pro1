// P97156:Numbers in an interval
#include <iostream>
using namespace std;

int main() {
    int num1,num2;
    cin >> num1 >> num2; 
    for(int i=num1; i<num2; ++i){
        cout << i << ",";
    }
    if(num1 <= num2) cout << num2 << endl;
    else cout << endl;
}
