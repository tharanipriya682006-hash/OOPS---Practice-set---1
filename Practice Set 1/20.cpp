// Find the greatest common divisor (GCD) of two numbers using a loop.
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;

    // Make sure numbers are positive
    if (a <= 0 || b <= 0)
    {
        cout << "Both numbers must be positive." << endl;
        return 0;
    }

    // In the GCD program using loop (Euclidean Algorithm), the key condition is:
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    /* b is greater than a
    Suppose a = 56, b = 98.
    Step 1: Compute a % b → 56 % 98 = 56 (since 98 > 56, remainder = 56).
    Step 2: Now a = 98, b = 56.
    Step 3: Next step becomes just like Case 1 above.*/

    cout << "The GCD is: " << a << endl;

    return 0;
}
    