//this is a worng solution
//i will try it leter for verdict ac
/*
This is the input.
a b c d e f g .      asdf apple
I hope this sentence is properly translated into pig latin.
1 2 3 4 abc easy as 123.
hello
hello my friend
hello.
hello my friend.
ello
ello my friend
ello.
ello my friend.

hisTay isay hetay inputay.
aay bay cay day eay fay gay .      asdfay apple
Iay opehay histay entencesay isay roperlypay ranslatedtay intoay igpay atinlay.
1 2 3 4 abcay easyay asay 123.
ello
ellohay ymay riend
ellohay.
ellohay ymay riendfay.
ello
elloay ymay riend
elloay.
elloay ymay riendfay.
**/
#include <bits/stdc++.h>
using namespace std;

#define input_file() freopen("in.txt", "rt", stdin);
#define newline printf("\n");

int main() {
	input_file()

	string s;
	string vowel = "aAeEiIoOuU";
	bool flag = true;

	while(getline(cin, s)) {
		//cout<<s<<endl;
		istringstream is(s);

		string s1;
		int count = 0;
		while(is>>s1) {
			count++;
			if(count > 1) {
				cout<<" ";
			}
			if(s1[0] != vowel[vowel.find(s1[0])]) {
				char ch = s1[0];
				s1.erase(0,1);
				if(s1[s1.size()-1] != '.') {
					cout<<s1<<ch<<"ay";
				} else {
					s1.erase(s1.size() - 1, s1.size() - 1);
					cout<<s1<<ch<<"ay.";
				}
			} else {
				if(s1[s1.size()-1] != '.') {
					cout<<s1<<"ay";
				} else {
					s1.erase(s1.size() - 1, s1.size() - 1);
					cout<<s1<<"ay.";
				}
			}
		}
		newline;
	}
}
