#include <iostream>
#include <vector>
using namespace std;


struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* ret = new ListNode;
        
        ListNode* work = ret;

        bool flag = false;    

        while (l1->next != nullptr) {
            
            ListNode* node = new ListNode;

            if ((l1->val) + (l2->val) >= 10) {
                
                if (flag)
                    node->val = ((l1->val) + (l2->val)) % 10 + 1;
                else
                    node->val = ((l1->val) + (l2->val)) % 10;
                
                flag = true;

            } else {

                if (flag)
                    node->val = ((l1->val) + (l2->val)) % 10 + 1 ;
                else
                    node->val = ((l1->val) + (l2->val)) % 10;
                
            }

            work->next = node;
            
            l1++;
            l2++;
            work++;

        }

        return ret->next;

    }
};

int main()
{
    ListNode* head1 = new ListNode;
    ListNode* head2 = new ListNode;

    ListNode* work = new ListNode;
    
    work->val = 3;
    work->next = head1->next;
    head1->next = work;
    
    ListNode* work2 = new ListNode;
    
    work2->val = 4;
    work2->next = head1->next;
    head1->next = work2;
    
    ListNode* work3 = new ListNode;
    
    work3->val = 2;
    work3->next = head2->next;
    head2->next = work3;

    ListNode* work4 = new ListNode;
    work4->val = 4;
    work4->next = head2->next;
    head2->next = work4;

    ListNode* work5 = new ListNode;
    work5->val = 6;
    work5->next = head2->next;
    head2->next = work5;

    ListNode* work6 = new ListNode;
    
    work6->val = 5;
    work6->next = head2->next;
    head2->next = work;
    // Solution solution;

    // ListNode* ret = solution.addTwoNumbers(head1,head2);

    while (head1 -> next != nullptr)
    {
        cout << head1->val;
        head1++;
    }
    

    return 0;
}