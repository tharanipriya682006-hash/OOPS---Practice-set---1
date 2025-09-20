/* Calculate the simple interest. Formula: SI = P*R*T / 100
SI -> Simple interest
P → Principal amount
R → Rate of interest (per annum)
T → Time (in years) */

#include<iostream>
using namespace std;

int main()
{
    float P,R,T,SI;
    cout<<"Enter te principle amount: ";
    cin>>P;

    cout<<"Enter the rate of interest: ";
    cin>>R;

    cout<<"Enter the time: ";
    cin>>T;

    
    /* Validation conditions
    Checks if P > 0
    Checks if R >= 0
    Checks if T > 0 */
    if (P <= 0)
    {
        cout << "Principal amount must be greater than 0." << endl;
    } 
    else if (R < 0)
    {
        cout << "Rate of interest cannot be negative." << endl;
    } 
    else if (T <= 0)
    {
        cout << "Time must be greater than 0." << endl;
    } 
    else
    {
        SI = (P * R * T) / 100;
        cout << "The Simple Interest is: " << SI << endl;
        cout << "The Total Amount (Principal + SI) is: " << (P + SI) << endl;
    }

    return 0;

}