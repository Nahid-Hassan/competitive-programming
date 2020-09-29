#include <bits/stdc++.h>
using namespace std;

#define mx 10000

int isBalanced(char input[]) {
	int len = strlen(input);

	char _stack[len], lastChar;
	int top;

	top = 0;
	for(int i = 0; i < len; i++) {
		if(input[i] == '(' || input[i] == '{' || input[i] == '[') {
			_stack[top] = input[i];
			top++;
		} else if (input[i] == ')' || input[i] == '}' || input[i] == ']') {
			if(top == 0) {
				return 0;
			}
			top--;
			lastChar = _stack[top];
			if(lastChar == '(' && input[i] != ')') {
				return 0;
			}
			if(lastChar == '{' && input[i] != '}') {
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
	char input[mx];

	while(cin >> input) {
		if(isBalanced(input)) {
			cout << "yes\n";
		} else {
			cout << "no\n";
		}
	}

	return 0;
}

