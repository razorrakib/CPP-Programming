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
        Element access of string

        s[i]      > accesss the ith index of str
        s.at(i)   > accesss the ith index of str

        s.back()  > access the last element of str
        s.front() > access the first element of str

    */

    string s = "Hello";
    cout << "s[0] = " << s[0] << endl;
    cout << "s.at(1) = " << s.at(1) << endl;

    cout << "s.front() = " << s.front() << endl;
    cout << "s.back() = " << s.back() << endl;

    // another way to access first and last element
    cout << "First element = " << s[0] << endl;
    cout << "Last element  = " << s[s.size() - 1] << endl;

    return 0;
}