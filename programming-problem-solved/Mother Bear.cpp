#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
#include <cstdio>

#define nl "\n"

using namespace std;

bool is_palindrome(string in);

int main() {
    string name;
    int n = 5;
    while(1) {
        std::getline (std::cin,name);
        if(name[0] == 'D' && name[1] == 'O' && name[2] == 'N' && name[3] == 'E') {
            break;
        }
        if(is_palindrome(name)) {
            cout<<"You won't be eaten!"<<nl;
        }
        else {
            cout<<"Uh oh.."<<nl;
        }
    }

    return 0;
}
bool is_palindrome(string in){
    string st1;
//This for loop removes all puntuation
    for(int i=0; i<in.size(); i++){
        if(isalpha(in[i]))
        if(in[i] >= 'A' && in[i] <= 'Z') {
            st1.push_back(in[i]+32);
        }
        else {
            st1.push_back(in[i]);
        }
    }
//This checks for palindrome
    for(int i=0, j=st1.size()-1; i<(in.size()/2); i++, j--){
        if(st1[i] != st1[j])
            return false;
    }
    return true;
}
