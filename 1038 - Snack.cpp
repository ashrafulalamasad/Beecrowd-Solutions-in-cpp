#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, y; cin >> x >> y;
    switch (x) {
        case 1:
            cout << fixed << setprecision(2) << "Total: R$ " << y * 4.0 << endl;
            break;
        case 2:
            cout << fixed << setprecision(2) << "Total: R$ " << y * 4.5 << endl;
            break;
        case 3:
            cout << fixed << setprecision(2) << "Total: R$ " << y * 5.0 << endl;
            break;
        case 4:
            cout << fixed << setprecision(2) << "Total: R$ " << y * 2.0 << endl;
            break;
        case 5:
            cout << fixed << setprecision(2) << "Total: R$ " << y * 1.5 << endl;
            break;
    }
    return 0;
}
