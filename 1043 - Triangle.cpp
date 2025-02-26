#include<bits/stdc++.h>
using namespace std;

int main()
{
    float A, B, C; cin >> A >> B >> C;
    if((A + B) > C && (B + C) > A && (A + C) > B){
        cout<<fixed<<setprecision(1)<<"Perimetro = "<<A+B+C<<endl;
    }else{
        cout<<fixed<<setprecision(1)<<"Area = "<<(A+B)/2*C<<endl;
    }
    return 0;
}
