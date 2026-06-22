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
        
        ListNode *head=nullptr,*ml=nullptr,*prev=nullptr;
        while(list1 && list2)
        {
            if(list1->val<list2->val)
            {
                ml = new ListNode(list1->val);
                list1=list1->next;
                
            }
            else
            {
                ml = new ListNode(list2->val);
                list2 = list2->next;
            }

             if(!head)
              {      head = ml;
                    prev=ml;
              }
              else
              {
              prev->next=ml;
              prev=ml;
              }
            
             
        }
cout<<" both loop completed"<<endl;
        while(list1)
        {
            ml = new ListNode(list1->val);
                
                list1=list1->next;

                 if(!head)
              {      head = ml;
                    prev=ml;
              }
              else
              {
              prev->next=ml;
              prev=ml;
              }
        }

        while(list2)
        {
            ml = new ListNode(list2->val);
                 if(!head)
              {      head = ml;
                    prev=ml;
              }
              else
              {
              prev->next=ml;
              prev=ml;
              }
                list2=list2->next;
        }
        return head;
    }
};
