#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp;
        int len = 0;
        
        temp = head;
        while(temp != NULL) {
            temp = temp->next;
            len++;
        }
        
        for(int i = 0; i < len / 2; i++) {
            head = head->next;
        }
        return head;
    }
};

int main() {
    return 0;
}