#include<iostream>
using namespace std;

int main()
{
    int n1;
    cout<<"Enter a number: ";
    cin>>n1;
    if (n1>0) 
    {
        cout<<"n1 is positive.";
    }
    else if (n1<0) 
    {
        cout<<"n1 is negative";
    }
    else
    { 
        cout<<"n1 is Zero";
    }

    return 0;
}