#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name; double a, b; cin >> name >> a >> b;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << a+b*0.15 << endl;
    return 0;
}
