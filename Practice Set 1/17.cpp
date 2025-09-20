// Fibonacci series up to n terms
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: "; // Fibonacci terms the user wants
    cin>>n;

    /* First Fibonacci term (F0) = 0
       Second Fibonacci term (F1) = 1
    So we start with a = 0, b = 1 */
    int a = 0,b = 1;

    for(int i=1; i<=n; i++)
    {
        cout<<a<<endl; // Print current term
        int next = a+b; // Calculate next term
        a=b; // Move b into a
        b=next; // Move next into b
    }

    cout<<endl;
    return 0;

}

/* Fibonacci series up to the number 10

a, b = 0, 1

print("Fibonacci series up to 10:")

while a <= 10:
    print(a, end=" ")
    a, b = b, a + b */

