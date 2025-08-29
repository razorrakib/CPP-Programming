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
    // string constructor
    string s = "Hello";
    cout << s << endl;

    string s1("Hello");
    cout << s1 << endl;

    string s2("Hello", 3); // resizes to 3
    cout << s2 << endl;    // hel

    string t = "Hello World";
    string s3(t, 2);    // removes 2 vaules from t, and stores rest of it
    cout << s3 << endl; // llo World

    string s4(6, 'N');  // stores size 6, and inserts them with N
    cout << s4 << endl; // NNNNNN

    return 0;
}