#include<iostream>
using namespace std;

int main()
{
    int i,j;
    for (i=1; i<=100; i++)
    {
        bool isprime = true;

        if (i == 1)
        {
            continue; // Skip the prime-checking part for 1
        }

        for (j=2; j*j<=i; j++)
        {
            if (i%j==0)
            {
                isprime = false;
                break;
            }
        }
        
        if (isprime)
        {
            cout<<i<<endl;
        }
    }

    return 0;
}
