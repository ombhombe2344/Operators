#include<iostream>
using namespace std;

int main()
{
    int prn,a;

    cout<<"Enter yout prn: ";
    cin>>prn;

    while(prn>0)
    {
        a = prn%10;
        prn = prn/10;
        cout<<a;
    }
}
/*Enter yout prn: 123061
160321*/
