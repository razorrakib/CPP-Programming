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
    int roll;
    int cls;
    double gpa;

    // constructor
    // Student(int r, int c, int g)
    // {
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // }

    // this pointer > pointing dereferencing
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll; // basically (*this).roll = roll;
        this->cls = cls;   // (*this).cls = cls;
        this->gpa = gpa;   //(*this)gpa = gpa;
    }
};

// creating a static object to return it to main func
Student fun()
{
    Student oli(2, 11, 3.8);
    return oli;
}

// dynamic heap object return
Student *dynamicfun()
{
    Student *oli = new Student(1, 11, 3.85);
    return oli;
}

int main()
{
    /*
        constructor : to simplify seting up object values in a class
        Properties : No return type, Name same as class, deleared in the class

    */

    // calling the constructor as object and passing values
    Student rakibul(5, 10, 3.6);
    Student ahsanul(4, 10, 3.7);

    // calling the static func and dynamic func
    Student ferdous = fun();
    Student *fer = dynamicfun();

    cout << rakibul.roll << " " << rakibul.cls << " " << rakibul.gpa << endl;
    cout << ahsanul.roll << " " << ahsanul.cls << " " << ahsanul.gpa << endl;
    // value of fun()
    cout << ferdous.roll << " " << ferdous.cls << " " << ferdous.gpa << endl;
    // dynamic fun value
    cout << fer->roll << " " << fer->cls << " " << fer->gpa << endl;

    return 0;
}