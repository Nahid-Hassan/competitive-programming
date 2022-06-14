#include <bits/stdc++.h>
using namespace std;

int isBalanced(string input) {
	int len = input.size();

	char _stack[len], lastChar;
	int top;

	top = 0;
	for(int i = 0; i < len; i++) {
		if(input[i] == '(' || input[i] == '[') {
			_stack[top] = input[i];
			top++;
		} else if (input[i] == ')' || input[i] == ']') {
			if(top == 0) {
				return 0;
			}
			top--;
			lastChar = _stack[top];
			if(lastChar == '(' && input[i] != ')') {
				return 0;
			}
			if(lastChar == '[' && input[i] != ']') {
				return 0;
			}
		}
	}
	if(top == 0) return 1;
	else return 0;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int testCase;
	string input;

	cin >> testCase;
	cin.ignore();

	while(testCase--) {
		getline(cin, input);

		if(input.compare("\n") == 0) {
			cout << "Yes" << endl;
		} else if (input.size() % 2 != 0) {
			cout << "No" << endl;
		} else if(isBalanced(input)) {
			cout << "Yes " << endl;
		} else {
			cout << "No" << endl;
		}
	}

	return 0;
}

