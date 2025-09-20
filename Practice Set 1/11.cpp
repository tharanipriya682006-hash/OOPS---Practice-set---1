#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the mark: ";
    cin>>n;
    
    if (n>=90)
    {
        cout<<"A Grade";
    }
    else if (n>=80)
    {
       cout<<"B Grade";
    }
    else if (n>=70)
    {
        cout<<"C Grade";
    }
    else if (n>=60)
    {
        cout<<"D Grade";
    }
    else
    {
        cout<<"F Grade";
    }

    return 0;
}