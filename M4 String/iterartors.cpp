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
    /*
       s.begin()  > pointer of first element of str
       s.end()  > pointer of last element of str , specifically the null

    */

    string s = "Hello";
    cout << "s.begin() = " << *s.begin() << endl;       // prints first element
    cout << "s.end() = " << *s.end() << endl;           // prints null
    cout << "s.end() - 1 = " << *(s.end() - 1) << endl; // prints last element

    // iterator using begin and end
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }

    cout << endl;

    // MORE SIMPLIFIED
    for (auto i : s)
    {
        cout << i << endl;
    }

    return 0;
}