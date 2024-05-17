/*
You are given two non-empty linked lists representing two non-negative integers. 
The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 */

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
private:
    int carryOver = 0;
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ret = new ListNode();
        ListNode* temp = ret;
        
        ListNode* retActual = temp;
        while (l1 != NULL || l2 != NULL || carryOver != 0) {
            
            int sum = 0;
            if (l1 != NULL && l2 != NULL) {
                sum = l1->val + l2->val + carryOver;
                carryOver = sum/10;
                sum = sum%10;
                ret = new ListNode(sum);
                temp->next = ret;
                l1 = l1->next;
                l2 = l2->next;
            } else if (l1 != NULL) {
                sum = l1->val + carryOver;
                carryOver = sum/10;
                sum = sum%10;
                ret = new ListNode(sum);
                temp->next = ret;
                l1 = l1->next;
            } else if (l2 != NULL) {
                sum = l2->val + carryOver;
                carryOver = sum/10;
                sum = sum%10;
                ret = new ListNode(sum);
                temp->next = ret;
                l2 = l2->next;
            } else {
                if (carryOver != 0) {
                    ret = new ListNode(carryOver);
                    temp->next = ret;
                    carryOver/=10;
                }
            }
            
            temp = temp->next;
        }
        return retActual->next;
    }
};
