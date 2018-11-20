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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {   
      struct ListNode *l=l1;
       
        while(l1->next&&l2->next)
        {
        if((l1->val+l2->val)>=10)
           {
              l1->val=(l1->val+l2->val)%10;
            l1->next->val++;
           
           }
          else   l1->val+=l2->val;
             l1=l1->next;
            l2=l2->next;
            
        }
        
        if(l1->next==NULL&&l2->next==NULL)
        {
            struct ListNode* p;
            if((l1->val+l2->val)>=10)
            {
                
                  l1->val=(l1->val+l2->val)%10;
                
              p=( struct ListNode *)malloc(sizeof(struct ListNode));
                p->val=1;
              p->next=NULL;
                l1->next=p;
               
            }
            else l1->val+=l2->val;
         }
        else if(l1->next==NULL)
        {
             if((l1->val+l2->val)>=10)
            {
                  l1->val=(l1->val+l2->val)%10;
                
                (l2->next->val)++; 
                 l1->next=l2->next;
                 //  printf("%d ",l1->next->val);
                 l2=l2->next;
                // printf("%d ",l2->val);
                 while(l2->next)
                 {
                     if(l2->val<10)
                     {
                     
                        break;
                     }
                      
                         l2->val%=10;
                         l2->next->val++;
                         l2=l2->next;
                   
                 }
                 if(l2->val>=10)
                  {
                      struct ListNode*   p1=( struct ListNode *)malloc(sizeof(struct ListNode));
                         p1->val=1;
                         p1->next=NULL;
                      l2->val=(l2->val)%10;
                     //  printf("%d ",l2->val);
                     
                      l2->next=p1;
                       //printf("%d ",l2->val);
                }
              
            }
            else
            {
                l1->val+=l2->val;
                
                l1->next=l2->next;
            }
           
               
        }      
        else
        {
            
             if((l1->val+l2->val)>=10)
            {
                  l1->val=(l1->val+l2->val)%10;
                l1->next->val++;  
                 l1=l1->next;
                 while(l1->next)
                 {
                     if(l1->val>=10)
                     {
                     
                         
                         l1->val%=10;
                         l1->next->val++;
                         l1=l1->next;
                     }
                     else break;
                       
                }
                  if(l1->val>=10)
                  {
                      l1->val%=10;
                      struct ListNode*   p=( struct ListNode *)malloc(sizeof(struct ListNode));
                         p->val=1;
                         p->next=NULL;
                      l1->next=p;
                    }
            
            }
            else l1->val+=l2->val;            
        }
        return l;
    }
};
