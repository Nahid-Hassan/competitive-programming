///Day-1(19-04-2019) C++ STL <algorithm> library
///First Five function

#include <iostream>
#include <array>
#include <algorithm>
#include <vector>
using namespace std;

/// This function create for for_each()
void myFunction(int n) {
    cout << n << " ";
}

int main() {
    /**
     fName    : all_of()
     Synopsis : bool all_of (InputIterator first, InputIterator last, UnaryPredicate pred)
     Return   : Returns true if pred returns true for all the elements in the range [first,last) or if the
                range is empty, and false otherwise. **/

    array<int, 8> dataSet1 = {1,3,5,7,9,11,13,15};

    if(all_of(dataSet1.begin(), dataSet1.end(), [](int i) {return i % 2;})) {
        cout << "All the elements are odd number." << endl;
    } else {
        cout << "All the elements are not odd number." << endl;
    }

    /**
     fName    : any_of()
     Synopsis : bool any_of (InputIterator first, InputIterator last, UnaryPredicate pred)
     Return   : Returns true if pred returns true for any of the elements in the range [first,last), and false otherwise. **/

    array<int, 5> dataSet2 = {1,2,3,4,-5};

    if(any_of(dataSet2.begin(), dataSet2.end(), [](int i) {return i < 0;})) {
        cout << "There are at least one negetive number in this data set." << endl;
    } else {
        cout << "There is no negative number in this data set." << endl;
    }

    /**
     fName    : none_of()
     Synopsis : bool none_of (InputIterator first, InputIterator last, UnaryPredicate pred)
     Reutrn   : Returns true if pred returns false for all the elements in the range [first,last) or if the
                range is empty, and false   otherwise. **/

    array<int, 5> dataSet3 = {1,2,3,4,5};

    if(none_of(dataSet3.begin(), dataSet3.end(), [](int i) {return i < 0;})) {
        cout << "There are no negative element in this data set." << endl;
    } else {
        cout << "There are at least one negative element in this data set." << endl;
    }

    /**
     fName    : for_each()
     Synopsis : Function for_each (InputIterator first, InputIterator last, Function fn);
     Return   : Returns fn. **/

    array<int, 5> dataSet4 = {1,2,3,4,-5};

    for_each(dataSet4.begin(), dataSet4.end(), myFunction);
    cout << endl;

    /**
     fName    : find()
     Synopsis : InputIterator find (InputIterator first, InputIterator last, const T& val)
     Return   : Returns an iterator to the first element in the range [first,last) that compares equal to val.
                If no such element is  found, the function returns last. **/


    int myInts[5] = {10,20,34,40,30};
    int *p;

    p = find(myInts, myInts + 5, 40);

    if(p != myInts + 5) {
        cout << "Element found in myInts " << *p << endl;
    } else {
        cout << "Element not found in myInts" << endl;
    }

    vector <int> myVector (myInts, myInts + 5);
    vector <int>::iterator it;

    it = find(myVector.begin(), myVector.end(), 12);

    if(it != myVector.end()) {
        cout << "Element found in myInts " << *it << endl;
    } else {
        cout << "Element not found in myInts" << endl;
    }

    return 0;
}
