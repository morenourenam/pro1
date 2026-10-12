//How many seconds are they?:P70955
#include <iostream>
using namespace std;
/*

int main(){
    int y, d, h, m, s;
    cin >> y >> d >> h >> m >> s;
    y = (((y*365)*24)*60)*60;
    d = ((d*24)*60)*60;
    h = (h*60)*60;
    m = m*60;
    cout << y+d+h+m+s << endl;
}
    
int main(){
    int y, d, h, m, s;
    cin >> y >> d >> h >> m >> s;
    y = y*365;
    d = (y+d)*24;
    h = (d+h)*60;
    m = (m+h)*60;
    s = (s + m);
    cout << s << endl;
}
*/

int main(){
    int y, d, h, m, s;
    cin >> y >> d >> h >> m >> s;
    int total = 0;
    total = total + s;
    total = total + (m*60);
    total = total + (h*60*60);
    total = total + (d*60*60*24);
    total = total + (y*60*60*24*365);
    cout << total << endl;
}