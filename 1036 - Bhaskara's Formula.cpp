#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, d; cin >> a >> b >> c;
    d = b*b - 4*a*c;
    if(d >= 0 && a != 0){
        cout<<"R1 = "<<fixed<<setprecision(5)<<(-b+sqrt(d))/(2*a)<<endl;
        cout<<"R2 = "<<fixed<<setprecision(5)<<(-b-sqrt(d))/(2*a)<<endl;
    }else{
        cout << "Impossivel calcular" << endl;
    }
    return 0;
}
