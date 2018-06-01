/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        auto pA = headA;
        auto pB = headB;

        int m=0;
        while(pA){
            m++;
            pA = pA->next;
        }
        int n=0;
        while(pB){
            n++;
            pB = pB->next;
        }
        int nsteps = std::abs(m-n);
        //make sure headA points to the longer list
        if(m<n){
            std::swap(headA, headB);
        }

        while(nsteps){
            headA = headA->next;
            nsteps--;
        }

        while(headA && headB){
            if(headA==headB){
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        return nullptr;
    }
};
