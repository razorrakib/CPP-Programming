/* Bismillahir Rohmanir Roheem
   In the Name of Allah (SWT) the Merciful the Compassionate

   Rakibul Hassan (razorrakib)
   BSc CSE - American International University Bangladesh
*/
// Problem Link -
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    // if , else if and else
    if (x > 0)
    {
        cout << "Positive Number" << endl;
    }
    else if (x < 0)
    {
        cout << "Negative Number" << endl;
    }
    else if (x == 0)
    {
        cout << "Zero" << endl;
    }
    else
    {
        cout << "Invalid Input" << endl;
    }

    /*

        switch case : if case is true, execute the task, make sure to use break if possible
        Limitation : only useful if case value is known, not suitable for conditions

    */

    switch (x)
    {
    case 0:
        cout << "Case : Zero" << endl;
        break;
    case 1:
        cout << "Case : Positive" << endl;
        break;
    case -1:
        cout << "Case : Negative" << endl;
        break;

    default:
        cout << "Case : Invalid Input" << endl;
        break;
    }

    return 0;
}