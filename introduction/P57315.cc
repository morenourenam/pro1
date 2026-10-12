//P57315: ABC
#include <iostream>
using namespace std;

int main() {
	int a1,b1,c1; //A<B<C a1 = numero 1, b1 = numero 2, c1 = numero 3
	cin >> a1 >> b1 >> c1;
    char A1,B1,C1; // A1 = lletra 1, B2 = lletra 2, B3 = lletra c
    cin >> A1 >> B1 >> C1;
    int A =0;
    int B =0;
    int C =0; // C A B, 
    if((a1<b1) and (b1<c1)){ A = a1; B = b1; C = c1;}
    else if((a1<c1) and (c1<b1)){ A = a1; B = c1; C = b1;}
    else if((b1<a1) and (a1<c1)){ A = b1; B = a1; C = c1;}
    else if((b1<c1) and (c1<a1)){ A = b1; B = c1; C = a1;}
    else if((c1<a1) and (a1<b1)){ A = c1; B = a1; C = b1;}
    else if((c1<b1) and (b1<a1)){ A = c1; B = b1; C = a1;}

    if(A1=='A') cout << A;
    else if (A1 =='B') cout << B;
    else cout << C;

    if(B1=='A') cout << " " << A << " ";
    else if (B1 == 'B') cout << " " << B << " ";
    else cout << " " << C << " ";

    if(C1=='A') cout << A;
    else if (C1 == 'B') cout << B;
    else cout << C;

    cout << endl;
    }
