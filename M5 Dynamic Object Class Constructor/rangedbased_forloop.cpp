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
    string s;
    cin >> s;

    cout << "FOR LOOP" << endl;
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << endl;
    }

    cout << "\nRANGED BASED FOR LOOP" << endl;
    // it is sort of like iterators as c is assigned to characters based on s
    // very useful for printing
    for (char c : s) // also can be done by auto
    {
        cout << c << endl;
    }

    return 0;
}