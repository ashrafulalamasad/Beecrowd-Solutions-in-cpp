#include<bits/stdc++.h>
#define mp make_pair
#define INF 0x3f3f3f3f
using namespace std;

typedef long long int64;
typedef pair<int, int> ii;

int main()
{
    ios::sync_with_stdio(false);
    int64 a, x, y, t = 1;
    while (cin >> a && a) {
        if (t > 1)
            cout << "\n";
        cout << "Cidade# " << t++ << ":\n";
        map<int64, int64> pq;
        map<int64, int64>::iterator it;
        pair<map<int64, int64>::iterator, bool> ret;
        double con = 0, p = 0;
        while(a--){
            cin >> x >> y;
            ret = pq.insert(mp(y / x, int64(x)));
            if (!ret.second)
                pq[y / x] += int64(x);
            p += x, con += y;
        }
        int c = 0;
        for (it = pq.begin(); it != pq.end(); ++it) {
            if (c == 0)
                cout << it->second << "-" << it->first;
            else
                cout << " " << it->second << "-" << it->first;
            c++;
        }
        cout << "\n";
        cout << "Consumo medio: " << fixed << setprecision(2) << floor((con / p) * 100) / 100 << " m3.\n";
    }
    return 0;
}
