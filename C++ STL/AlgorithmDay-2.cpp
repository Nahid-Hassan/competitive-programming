///Day-2(28-04-2019) C++ STL <algorithm> library
///Second Five function

#include <iostream>
#include <array>
#include <algorithm>
#include <vector>
#include <cctype>
using namespace std;

//This function for find_if function
bool isOdd(int num) {
    return ((num%2)==1);
}

int main() {
    /**
     fName    : find_if()
     Synopsis : template <class InputIterator, class UnaryPredicate>
                InputIterator find_if (InputIterator first, InputIterator last, UnaryPredicate pred);
     Return   : Returns an iterator to the first element in the range [first,last) for which 
                pred returns true. If no such element is found, the function returns last. **/
   
    vector <int> num;
   
    num.push_back(10);
    num.push_back(24);
    num.push_back(13); 
    num.push_back(10);

    cout << "First odd number is = ";
    vector <int>::iterator it = find_if(num.begin(), num.end(), isOdd);
    cout << *it << endl;

    //if not found desire number return the endIterator

    //Using lamda method find first even number 
    it = find_if(num.begin(), num.end(), [](int i) {return i % 2 == 0;});
    cout << "First even number is = ";
    cout << *it << endl;

    /**
     fName    : find_if_not()
     Synopsis : template <class InputIterator, class UnaryPredicate>
                InputIterator find_if_not (InputIterator first, InputIterator last, UnaryPredicate pred);
     Return   : Returns an iterator to the first element in the range [first,last) for 
                which pred returns false. If no such element is found, the function returns last.**/

    it = find_if_not(num.begin(), num.end(), [](int i) { return i % 2 == 0; }); //return false only for odd number
    cout << *it << endl;

    /**
     fName    : find_end()
     Synopsis : template <class ForwardIterator1, class ForwardIterator2>
                ForwardIterator1 find_end (ForwardIterator1 first1, ForwardIterator1 last1,
                ForwardIterator2 first2, ForwardIterator2 last2);
     Return   : An iterator to the first element of the last occurrence of [first2,last2) in [first1,last1).
                If the sequence is not found, the function returns last1.**/

    int myints[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    vector<int> haystack(myints, myints + 10);

    // using default comparison
    int seq[] = {1,2,3};
    it = find_end(haystack.begin(), haystack.end(), seq, seq + 3);
    
    //print position
    if(it != haystack.end()) {
        cout << "Sequence {1,2,3} found at position: " << (it - haystack.begin()) << endl;
    }

    // Using my comparison function 
    int seq1[] = {4,5,1};
    it = find_end(haystack.begin(), haystack.end(), seq1, seq1 + 3, [](int i, int j) {return i == j;});
    if (it != haystack.end()) {
        cout << "Sequence {4,5,1} found at position: " << (it - haystack.begin()) << endl;
    }
    
    int seq2[] = {4, 5};
    it = find_end(haystack.begin(), haystack.end(), seq2, seq2 + 2, [](int i, int j) { return i == j; });
    if (it != haystack.end()) {
        cout << "Sequence {4,5,1} found at position: " << (it - haystack.begin()) << endl;
    } // return the last occurence position

    //if sequence not found what's happen??????????
    int seq3[] = {4, 5, 6};
    it = find_end(haystack.begin(), haystack.end(), seq3, seq3 + 3, [](int i, int j) { return i == j; });
    if (it != haystack.end()) {
        cout << "Sequence {4,5,6} found at position: " << (it - haystack.begin()) << endl;
    } //it == haystack.end() so if contion is not working

    /**
     fName    : find_first_of()
     Synopsis : template <class ForwardIterator1, class ForwardIterator2>
                ForwardIterator1 find_first_of (ForwardIterator1 first1, ForwardIterator1 last1,
                ForwardIterator2 first2, ForwardIterator2 last2);
     Return   : Returns an iterator to the first element in the range [first1,last1) that matches any of the elements in [first2,last2). 
                If no such element is found, the function returns last1.**/

    char ch[] = {'a', 'b', 'c', 'A', 'B', 'C'};
    vector <char> myChar(ch, ch + 6);
    

    char seqChar[] = { 'A','B','C' };
    //using default comparison (Case Sensetive)
    vector <char>::iterator it1 = find_first_of(myChar.begin(), myChar.end(), seqChar, seqChar + 3);
    
    //print first match and position
    if(it1 != myChar.end()) {
        cout << "First match is " << *it1 << endl;
        cout << "Sequence {'A', 'B', 'C'} found at position: " << (it1 - myChar.begin()) << endl;
    }
    //using my lamda method (Without Case Sensetive)
    it1 = find_first_of(myChar.begin(), myChar.end(), seqChar, seqChar + 3, [] (char a, char b) {return tolower(a) == tolower(b);});
    if (it1 != myChar.end()) {
        cout << "First match is " << *it1 << endl;
        cout << "Sequence {'A', 'B', 'C'} found at position: " << (it1 - myChar.begin()) << endl;
    }

    /**
     fName    : adjacent_find()
     Synopsis : template <class ForwardIterator>
                ForwardIterator adjacent_find (ForwardIterator first, ForwardIterator last);
     Return   : Searches the range [first,last) for the first occurrence of two consecutive 
                elements that match, and returns an iterator to the first of these two elements, or last if no such pair is found. **/

    int myint[] = {5, 20, 5, 30, 30, 20, 10, 10, 20};
    vector<int> myNum(myint, myint + 8);

    it = adjacent_find(myNum.begin(), myNum.end());
    if(it != myNum.end()) {
        cout << "The first pair of repeated elements are: " << *it << endl;
    } 
    it = adjacent_find(++it, myNum.end(), [](int a, int b) {return a == b;});
    if (it != myNum.end()) {
        cout << "The first pair of repeated elements are: " << *it << endl;
    }


    return 0;
}