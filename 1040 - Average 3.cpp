#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, d, e, avg1;
    cin >> a >> b >> c >> d;
    avg1 = (a * 2 + b * 3 + c * 4 + d) / 10;
    cout << fixed << setprecision(1) << "Media: " << avg1 << endl;

    if (avg1 >= 7) {
        cout << "Aluno aprovado.\n";
    } else if (avg1 >= 5) {
        cout << "Aluno em exame.\n";
        cin >> e;
        cout << fixed << setprecision(1) << "Nota do exame: " << e << endl;

        if ((avg1 + e) / 2.0 >= 5.0) {
            cout << "Aluno aprovado.\n";
        } else {
            cout << "Aluno reprovado.\n";
        }

        cout << fixed << setprecision(1) << "Media final: " << (avg1 + e) / 2.0 << endl;
    } else {
        cout << "Aluno reprovado.\n";
    }
    return 0;
}
