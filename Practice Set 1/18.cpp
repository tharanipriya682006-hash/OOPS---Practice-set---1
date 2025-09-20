// Whether a given number is a palindrome or not.
/* A palindrome number is one that remains the same when reversed.
Examples: 121, 1331, 454 are palindromes, but 123, 567 are not. */

#include <iostream>
using namespace std;

int main()
{
    int n,rev=0,original;
    cout<<"Enter the number: ";
    cin>>n;

    original = n;
    
    while (n>0)
    {
        int rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }

    if (original == rev) // Chech the original number with reversed number
    {
        cout << original << " is a palindrome." << endl;
    }
    else
    {
        cout << original << " is not a palindrome." << endl;
    }

    return 0;

}