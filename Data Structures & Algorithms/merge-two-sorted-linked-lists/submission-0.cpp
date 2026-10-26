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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;
        // now  firts we will compRWE THEW  VALUE OF  BOTHT EH LIST  FIRDT NIDE 
        while(list1 != nullptr && list2 !=nullptr){
            if(list1->val <= list2->val){
                // now  merge the nide which has the smaller valeu
                tail->next = list1;
                //move the  list postion
                list1 = list1 ->next;
            }
            else{
                tail-> next = list2;
                // move the list 2
                list2 = list2->next;
            }
            tail = tail->next;
        }
            // if one  list is ended and another is left so  we wil p mergee all the lement 
            if(list1!=nullptr){
                // to add the element
                tail->next = list1;


            }
            else{
                tail->next = list2;
            }
            //intislly we store  the  elemennt dummy with -1 we donot want to include that so we will include form first node
            return dummy->next;

        
        
    }
};
