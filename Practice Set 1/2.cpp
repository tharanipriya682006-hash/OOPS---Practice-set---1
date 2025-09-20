#include<iostream>
using namespace std;

int main()
{
    int integer;
    cout<<"Enter an integer: "<<endl;
    cin>>integer;

    if (integer%2 == 0)
    {
        cout<<"It is even";
    }
    else
    {
        cout<<"It is odd";
    }
    
    return 0;
}