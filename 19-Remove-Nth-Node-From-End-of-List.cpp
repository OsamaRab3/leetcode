#ifndef LISTNODE_H
#define LISTNODE_H

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

#endif

 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        ListNode* del = nullptr;
        int count = 0;
        while (temp != nullptr)
        {
            count++;
            temp = temp->next;
        }
        int delPos = count - n;
        temp = head;
        count = 0;
        while (temp != nullptr)
        {
            count++;
            if (count == delPos) {
                del = temp->next;
                temp->next = temp->next->next;
                delete del;
                break;
            }
            temp = temp->next;
        }
        if (delPos == 0) {
            del = head;
            head = head->next;
            delete del;
        }
        return head;
    }
};
