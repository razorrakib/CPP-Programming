/* Bismillahir Rohmanir Roheem
   In the Name of Allah (SWT) the Merciful the Compassionate

   Rakibul Hassan (razorrakib)
   BSc CSE - American International University Bangladesh
*/
// Problem Link -
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /*
    min : outputs the smaller value
    max : outputs the bigger value
    swap : swaps the value of two variables
    */

    int x = 10, y = 20;
    cout << "Min value = " << min(x, y) << endl;
    cout << "Max value = " << max(x, y) << endl;

    // swap

    cout << "Before swap : x = " << x << " and y = " << y << endl;

    swap(x, y);
    cout << "After swap : x = " << x << " and y = " << y << endl;

    return 0;
}