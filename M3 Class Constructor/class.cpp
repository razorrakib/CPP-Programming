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
public: // access modifier
    string name;
    // char name[100];
    int roll;
    double cgpa;
};
int main()
{
    Student a, b; // created an object of the class
    a.name = "Rakibul Hassan";
    a.roll = 10;
    a.cgpa = 3.6;
    // char temp[100] = "sakib";
    // strcpy(a.name, temp);

    cout << "Name : " << a.name << ", Roll : " << a.roll << ", Cgpa : " << a.cgpa << endl;
    cout << " Input Name , Roll anf cgpa : " << endl;
    getline(cin, b.name);
    cin >> b.roll >> b.cgpa;
    cout << "Name : " << b.name << ", Roll : " << b.roll << ", Cgpa : " << b.cgpa;

    return 0;
}