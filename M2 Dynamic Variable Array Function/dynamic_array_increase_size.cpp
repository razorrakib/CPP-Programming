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
    // for static and dynamic array, new array has to be taken to increase size a[3] -> b[5]
    // the old static cannot be deleted taking more memory,
    // meanwhile  dynamic array can be deleted which saves memory

    // taking the first dynamic array
    int *a = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    // taking an increased sized dynamic arr
    int *b = new int[5];

    // copy values from a to b
    for (int i = 0; i < 3; i++)
    {
        b[i] = a[i];
    }

    // new values for b
    b[3] = 40;
    b[4] = 50;

    // deleting the old array
    delete[] a;

    // printing the b array
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}