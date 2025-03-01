#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h1, m1, h2, m2, dif; cin >> h1 >> m1 >> h2 >> m2;
    dif = (h2 * 60 + m2) - (h1 * 60 + m1);

    if(dif <= 0){
        dif += 24 * 60;
    }
    cout << "O JOGO DUROU " << dif / 60 << " HORA(S) E " << dif % 60 << " MINUTO(S)\n";
    return 0;
}
