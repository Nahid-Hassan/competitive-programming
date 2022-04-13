#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int arr[100000];
        bool flag = true;
        int idx = 0;
            
        while (head != NULL) {
            arr[idx] = head->val;
            head = head->next;
            idx++;
        }
        
        int temp = idx - 1;
        for (int i = 0; i < idx / 2; i++) {
            if (arr[i] != arr[temp]) {
                flag = false;
                break;
            }
            temp--;
        }
        
        return flag;
    }
    
};

int main() {
    return 0;
}