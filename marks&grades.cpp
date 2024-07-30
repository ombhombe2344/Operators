#include<iostream>
using namespace std;

int main()
{
    int maths,chem,python,C;

    cout<<"Enter your marks: ";
    cin>>maths>>chem>>python>>C;

    int tot = (maths+chem+python+C)/4;
    cout<<"You have scored: "<<tot<<"%"<<"\n";

    if(tot>=90)
    {
        cout<<"O grade.";
    }
    else if(tot>=80)
    {
        cout<<"A grade.";
    }
    else if(tot>=70)
    {
        cout<<"B grade.";
    }
    else if(tot>=60)
    {
        cout<<"C grade.";
    }
    else if(tot>=50)
    {
        cout<<"D grade.";
    }
    else if(tot>=40)
    {
        cout<<"Pass.";
    }
    else{
        cout<<"Fail";
    }
}

/*Enter your marks: 67
89
90
78
You have scored: 81%
A grade.*/