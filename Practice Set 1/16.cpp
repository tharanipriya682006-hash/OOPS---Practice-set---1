// Sum of digits of a given number.
#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    
    while (n>0)
    {
        int digit = n%10;
        sum += digit;
        n = n/10;
    }

    cout<<"The sum of n : "<<sum;
    return 0;
}