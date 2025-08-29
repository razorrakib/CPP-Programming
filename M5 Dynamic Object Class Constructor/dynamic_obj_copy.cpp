/* Bismillahir Rohmanir Roheem
   In the Name of Allah (SWT) the Merciful the Compassionate

   Rakibul Hassan (razorrakib)
   BSc CSE - American International University Bangladesh
*/
// Problem Link -
#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    string country;
    int jersey;

    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};

int main()
{
    Cricketer *sakib = new Cricketer("Bangladesh", 75);
    //  cout << sakib->jersey << endl;

    Cricketer *tamim = new Cricketer("Bangladesh", 60);
    //  cout << tamim->jersey << endl;

    tamim = sakib;
    //  cout << sakib->jersey << " " << tamim->jersey << endl;

    delete sakib;
    delete tamim;
    cout << sakib->jersey << endl;

    return 0;
}