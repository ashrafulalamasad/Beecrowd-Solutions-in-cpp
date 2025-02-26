#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c; cin >> a >> b >> c;
    if (a < b) {
        if (a < c) {
            if (b < c) {
                cout << a << endl << b << endl << c << endl << endl;
            } else {
                cout << a << endl << c << endl << b << endl << endl;
            }
        } else {
            cout << c << endl << a << endl << b << endl << endl;
        }
    } else {
        if (b < c) {
            if (c < a) {
                cout << b << endl << c << endl << a << endl << endl;
            } else {
                cout << b << endl << a << endl << c << endl << endl;
            }
        } else {
            cout << c << endl << b << endl << a << endl << endl;
        }
    }
    cout << a << endl << b << endl << c << endl;
    return 0;
}
