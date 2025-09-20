// Roots of a quadratic equation ax^2 + bx + c = 0.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c; // Coefficients of the quadratic equation
    cout<<"Enter the coefficents a,b,c: ";
    cin >> a >> b >> c;

    if (a==0)
    {
        // If a = 0, then the equation becomes bx + c = 0 (which is linear, not quadratic)
        cout<<"This is not a quadratic equation (a cannot be 0)."<<endl;
        // So check this case first and exit if it’s not quadratic.
        return 0;
    }

    /* The discriminant (D) is: D=b^2−4ac
    The discriminant tells us the nature of the roots:
    If D > 0 → two distinct real roots.
    If D == 0 → one real root (repeated).
    If D < 0 → complex (imaginary) roots.*/

    double discriminant = b*b - 4*a*c;
    double realPart, imaginaryPart;

    // Formula for roots: x= -b +- sqrt(D) / 2a
    /* If D > 0, we compute both roots separately.
    sqrt(discriminant) gives us the positive square root.*/
    if (discriminant > 0) 
    {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and distinct:" << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }

    // If D = 0, both roots are the same: x = -b / 2a
    else if (discriminant == 0) 
    {
        double root = -b / (2 * a);
        cout << "Roots are real and equal:" << endl;
        cout << "Root = " << root << endl;
    }

    /* If D < 0, we take the square root of -D (since square root of negative numbers is imaginary).
    Roots are written as: x = -b / (2 * a) +- sqrt(-D) / 2a * i
    realPart = -b / (2a)
    imaginaryPart = sqrt(-D) / (2a)*/
    else 
    {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are imaginary (complex):" << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}