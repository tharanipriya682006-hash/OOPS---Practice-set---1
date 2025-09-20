#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    bool isPrime = true;

    if (n<=1)
    {
        isPrime = false; // 0 and 1 are not prime
    }

    for (int i=2; i*i<=n; i++) // // check up to sqrt(n)
    {
        if (n%i==0)
        {
            isPrime = false; // If a divisor is found, we set isPrime = false because the number is composite (not prime)
            break; // Once we find one factor, no need to keep checking. We stop early
        }
    }

    if (isPrime)
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;

    return 0;
}
