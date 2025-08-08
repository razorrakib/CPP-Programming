/* Bismillahir Rohmanir Roheem
   In the Name of Allah (SWT) the Merciful the Compassionate

   Rakibul Hassan (razorrakib)
   BSc CSE - American International University Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // declare variables in c++
    int x = 5;      // intrger var
    float y = 5.55; // float
    char c = 'k';   // chararacter
    bool b = true;  // boolean

    // output of c++
    // \n and endl for new line
    // \t for tab
    cout << x << "\n"
         << y << "\t" << c << "\n"
         << b << endl;

    // input of c++ with cin or getline
    long long p;
    double q;
    string s;

    cin >> p >> q;
    getline(cin, s);

    cout << p << "\t" << q << "\t" << s << endl;

    // typecasting : converting relevent types from one to another

    // converting float to interger, the decimals will be trimmed
    float ff = 5.555;
    cout << (int)ff << endl;

    // converting character to integer by ASCII value
    char cc = 'A';
    cout << (int)cc << endl;

    // converting integer to character by ASCII value
    int aa = 65;
    cout << (char)aa << endl;

    return 0;
}