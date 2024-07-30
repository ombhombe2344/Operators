#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the coordinates: ";
    cin>>a>>b;

    if(a>=0 && b>=0)
    {
        cout<<"It is in 1st quadrant.";
    }
    else if(a<0 && b>=0)
    {
        cout<<"It is in 2nd quadrant.";
    }
    else if(a<0 && b<0)
    {
        cout<<"It is in 3rd quadrant.";
    }
    else
    {
        cout<<"It is in 4th quadrant";
    }
}
/.Enter the coordinates: 1
-4
It is in 4th quadrant./
