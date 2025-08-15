/* Bismillahir Rohmanir Roheem
   In the Name of Allah (SWT) the Merciful the Compassionate

   Rakibul Hassan (razorrakib)
   BSc CSE - American International University Bangladesh
*/
// Problem Link -
#include <bits/stdc++.h>
using namespace std;
int *q; // for stack mem
int *r; // for heap mem

void fun()
{               // for static mem
    int y = 10; // for statck
    q = &y;
    cout << "static Fun -> " << *q << endl; // static will keep the memory...

    return;
}

void fun2()
{
    int *z = new int; // for heap
    *z = 10;
    r = z;
    cout << "dynamic Fun -> " << *r << endl; // dynamic will keep the memory...

    return;
}
int main()
{
    //  new keyword accesses heap memory
    int x = 10;
    int *p = new int; // a pointer taken to access heap memory
    *p = 100;         // derefrencing
    cout << *p << endl;

    // stack memory
    fun();
    cout << "static Main -> " << *q << endl; // ...but after returning to main, it gets deleted;
    fun2();
    cout << "dynamic Main -> " << *r << endl; // ...and after returning to main, it gets keeps the mem;

    return 0;
}