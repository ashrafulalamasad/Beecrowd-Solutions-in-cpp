#include <iostream>
using namespace std;

int main()
{
    int seconds; cin>>seconds;
    int hours=seconds/3600;
    seconds=seconds-(hours*3600);
    int minutes=seconds/60;
    seconds=seconds-(minutes*60);
    cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
    return 0;
}
