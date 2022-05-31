#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s1 = "Hello World1";
    string s2 = "Hello World2";

    string s1_cat_s2 = s1 + s2;
    cout << s1_cat_s2 << endl;

    // length
    cout << s1.size() << endl; // return size of the string 
    cout << s1.length() << endl; // return size of the string

    // substring
    cout << s1.substr(0, 5) << endl; // return substring from 5 to 6

    // indexing or pattern matching
    cout << s1.find("World") << endl; // return index of the first occurrence of the pattern

    // insert
    cout << s1.insert(5, " ") << endl; // insert " " at index 5

    // delete
    cout << s1.erase(5, 5) << endl; // delete 5 characters from index 5

    // replacement
    cout << s1.replace(5, 5, " ") << endl; // replace 5 characters from index 5 with " "
}
