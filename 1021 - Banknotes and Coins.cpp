#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double amount; cin >> amount;
    int total = amount * 100 + 0.5;
    cout << "NOTAS:" << endl;
    cout << total / 10000 << " nota(s) de R$ 100.00" << endl;
    total %= 10000;
    cout << total / 5000 << " nota(s) de R$ 50.00" << endl;
    total %= 5000;
    cout << total / 2000 << " nota(s) de R$ 20.00" << endl;
    total %= 2000;
    cout << total / 1000 << " nota(s) de R$ 10.00" << endl;
    total %= 1000;
    cout << total / 500 << " nota(s) de R$ 5.00" << endl;
    total %= 500;
    cout << total / 200 << " nota(s) de R$ 2.00" << endl;
    total %= 200;
    cout << "MOEDAS:" << endl;
    cout << total / 100 << " moeda(s) de R$ 1.00" << endl;
    total %= 100;
    cout << total / 50 << " moeda(s) de R$ 0.50" << endl;
    total %= 50;
    cout << total / 25 << " moeda(s) de R$ 0.25" << endl;
    total %= 25;
    cout << total / 10 << " moeda(s) de R$ 0.10" << endl;
    total %= 10;
    cout << total / 5 << " moeda(s) de R$ 0.05" << endl;
    total %= 5;
    cout << total / 1 << " moeda(s) de R$ 0.01" << endl;
    return 0;
}
