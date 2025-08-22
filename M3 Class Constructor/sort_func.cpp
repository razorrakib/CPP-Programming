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
        c++ built in sort function
        syntax : sort(startint , ending)
        for array, give the starting pointer and ending pointer sort(arr, arr+ arr.size())
        for vector, give the starting point and ending point sort(v.begin(), v.end())

        for decending order : sort(arr, arr + n, greater<data_type>());


    */

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    // sort(arr, arr + n, greater<int>());  // for decending order
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}