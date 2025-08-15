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
    // static array
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    // dynamic array

    int *x = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << " ";
    }

    return 0;
}