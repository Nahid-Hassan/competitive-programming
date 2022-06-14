#include <bits/stdc++.h>
using namespace std;

#define mx 100

typedef struct {
	int top;
	int data[mx];
} Stack;

void push(Stack *s, int item) {
	if(s->top < mx) {
		s->data[s->top] = item;
		s->top = s->top + 1;
	} else {
		cout << "Stack is full!\n";
	}
}

int pop(Stack *s) {
	int item;

	if(s->top == 0) {
		cout << "Stack is empty!\n";

		return -1;
	} else {
		s->top = s->top - 1;
		item = s->data[s->top];
	}

	return item;
}

int main() {
    Stack ms;
    int item;

    ms.top = 0;

    push(&ms, 1);
	push(&ms, 2);
	push(&ms, 3);

	item = pop(&ms);
	cout << item << endl;
	item = pop(&ms);
	cout << item << endl;
	item = pop(&ms);
	cout << item << endl;

	return 0;
}
