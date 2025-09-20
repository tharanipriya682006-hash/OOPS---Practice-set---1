#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter n1: ";
    cin>>n1;
    cout<<"Enter n2: ";
    cin>>n2;

    if (n1>n2)
    {
        cout<<n1<<" is largest number.";
    }
    else
    {
        cout<<n2<<" is largest number.";
    }

    return 0;
}