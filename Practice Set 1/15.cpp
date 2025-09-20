// Reverse the digits of a given number.
#include<iostream>
using namespace std;

int main()
{
    int n,rev=0;
    cout<<"Enter the number: ";
    cin>>n;
    
    while (n>0)
    {
        int rem = n%10; // Get last digit
        rev = rev*10 + rem; // Add it to reverse
        n = n/10; // Remove last digit
    }

    cout << "Reversed number : " << rev << endl;
    return 0;
}

