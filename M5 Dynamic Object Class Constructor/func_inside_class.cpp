/* Bismillahir Rohmanir Roheem
   In the Name of Allah (SWT) the Merciful the Compassionate

   Rakibul Hassan (razorrakib)
   BSc CSE - American International University Bangladesh
*/
// Problem Link -
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int math;
    int english;
    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }

    // declearing function inside class
    void total()
    {
        cout << name << " got a total mark of = " << math + english << endl;
    }
};

int main()
{
    Student sakib("SAKIB AHMED", 10, 80, 90);
    sakib.total(); // accessising the function in the class

    Student ali("AHMED ALI", 15, 95, 70);
    ali.total(); // accessising the function in the class

    return 0;
}