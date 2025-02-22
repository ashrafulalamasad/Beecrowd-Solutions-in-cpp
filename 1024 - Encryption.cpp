#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string resp;
        getline(cin, resp);
        reverse(resp.begin(), resp.end());
        int pos = resp.size() / 2;
        for(int i = 0; i < resp.size(); i++){
            if((resp[i] >= 'A' && resp[i] <= 'Z') || (resp[i] >= 'a' && resp[i] <= 'z'))
                resp[i] += 3;
            if(i < pos)
                cout << char(resp[i]);
            else
                cout << char(resp[i] - 1);
        }
        cout << endl;
    }
    return 0;
}
