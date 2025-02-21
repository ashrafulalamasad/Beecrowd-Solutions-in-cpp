#include<bits/stdc++.h>
using namespace std;

long gcd(long a, long b){
    while(b){
        long c = a%b;
        a = b;
        b = c;
    }
    return a;
}

int main()
{
    int temp; cin >> temp;
    int A, B, C, D; char op, ign;
    while(cin >> A >> ign >> B >> op >> C >> ign >> D) {
        int E, F;
        if (op == '+') {
            E = A*D+C*B; F = B*D;
        } else if (op == '-') {
            E = A*D-C*B; F = B*D;
        } else if (op == '*') {
            E = A*C; F = B*D;
        } else if (op == '/') {
            E = A*D; F = B*C;
        }
        int G = E / gcd(E, F), H = F / gcd(E, F);
        if (H<0) {
            G*=-1;
            H*=-1;
        }
        cout << E << "/" << F << " = " << G << "/" << H << endl;
    }
    return 0;
}
