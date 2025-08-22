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
        string : a character array with dynamic memory
        syntax : string str_name
        can be compaered easily
        can be overrided, unlike char array where strcpy needed to be used

        Getline : for input string with spaces

        stringstream : for inividual words of a string with spaces


    */

    // string declare and input output
    string s;
    cin >> s;
    cout << s << endl;

    // string dyamic override
    string str = "Hello";
    str = "Meow";
    cout << str << endl;

    // string compare
    if (s == str)
    {
        cout << "They are same" << endl;
    }
    else
    {
        cout << "Not Same" << endl;
    }

    // string with spaces
    string s2;
    cout << "Enter a sentence with spaces : ";
    cin.ignore(); // if there is a cin before getline
    getline(cin, s2);
    cout << "s2 = " << s2 << endl;

    // string stream, to extract individual strings
    stringstream ss(s2);
    string word;
    cout << "The string stream of s2 : " << endl;
    while (ss >> word)
    {
        cout << word << endl;
    }

    return 0;
}