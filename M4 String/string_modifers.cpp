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
        String Modifers

        s+=           > appends another string
        s.append()    > appends another string

        s.push_back() > add character at the last of str
        s.pop_back()  > remove character at the last of str

        s=            > assign str val
        s.assign()    > assign str val

        s.erase()     > erase char from str
        s.replace()   > replace char from str
        s.insert()    > insert char at position of str

    */

    string s = "hello";
    string s1 = " meow";
    cout << "s = " << s << " and s1 = " << s1 << endl;

    s += s1;
    cout << "After s += s1 : " << s << endl;
    s.append(s1);
    cout << "After s.append(s1) : " << s << endl;

    s.push_back('X');
    cout << "After s.push_back('X') : " << s << endl;
    s.pop_back();
    cout << "After s.pop_back() : " << s << endl;

    s = "Meow";
    s1.assign(" kitty");
    cout << "s = " << s << " and s1 = " << s1 << endl;

    s.erase(1); // erases elements from index i to last
    cout << "After s.erase(1) : " << s << endl;
    s1.erase(0, 1); // erases 1 element from index 0
    cout << "After s1.erase(0,1) : " << s1 << endl;

    s.replace(1, 0, "Gotito"); // syntax : s.replace(index, num_of_char_to_replace, new_chars
    cout << "After s.replace(1,0,\"Gotito\") : " << s << endl;
    s1.insert(5, "KITTY"); // syntax : s.insert(index,insert_chars)
    cout << "After s1.insert(5,\"KITTY\") : " << s1 << endl;

    return 0;
}