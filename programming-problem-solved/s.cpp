#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    int x = 123;

    stringstream ss;
    ss << x;

    string str;
    ss >> str;

    reverse(str.begin(), str.end());

    ss.clear();

    ss << str;
    ss >> x;

    cout << x << '\n';
}
