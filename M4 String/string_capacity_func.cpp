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

    s.size()     > returns size of string
    s.max_size() > returns max size the string can hold

    s.capacity() > retruns current avaiable capacity

    s.clear()    > clears the string
    s.empty()    > retruns true if string is empty, else false
    s.resize()   > changes the size of string

    */

    string s = "Hello";
    cout << "s = " << s << endl;
    cout << "Calling s.size() : " << s.size() << endl;
    cout << "Calling s.max_size() : " << s.max_size() << endl;
    cout << "Calling s.capacity() : " << s.capacity() << endl;

    cout << "Calling s.clear()" << endl;
    cout << "Now s = " << s << endl;

    if (s.empty())
    {
        cout << "S is empty " << endl;
    }
    else
    {
        cout << "S is NOT empty" << endl;
    }

    s = "hello";
    cout << "Before resize : " << s << endl;
    s.resize(4);
    cout << "After resize small: " << s << endl;
    s.resize(7);
    cout << "After resize bigger: " << s << endl;
    s.resize(15, 'x'); // resizes to 15 and adds x after
    cout << "After resize bigger with x: " << s << endl;

    return 0;
}