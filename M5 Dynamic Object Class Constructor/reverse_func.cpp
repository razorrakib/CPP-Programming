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
        reverse func : built in c++ function to reverse array or string
        syntax : reverse(start, end)

    */

    string s;
    cin >> s;

    cout << s << endl;
    reverse(s.begin(), s.end());
    cout << s << endl;

    cout << "Insert array size : ";
    int n;
    cin >> n;
    int arr[n];

    cout << "Insert array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The Reversed array : ";
    reverse(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}