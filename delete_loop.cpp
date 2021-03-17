#include <iostream>
using namespace std;

/* Approach  1 - Using Hash Map
TC - O(N)
SC - O(N)  */


/* Approach  2 - Using 2 pointers method/Floyd's Cycle method
    Step1) take 2 pointers low(inc by 1) & high(inc by 2) and check whether low == high if true then
    step2) set low to head and high to where it was. 
    step3) if both low & high pointing at 1(starting) then check high->next!=low 

TC - O(N)
SC - O(1)  */    


struct Node * removeLoop(struct Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node * low = head;
        Node * high = head;
        while(low!=NULL and high!=NULL and high->next!=NULL){
            low = low->next;
            high = high->next->next;
            if(low==high) break;
            if(low==head){
                while(high->next!=NULL){
                    high = high->next;
                }
                high->next = NULL;
            }else if(low == high){
                low = head;
                while(low->next!=high->next){
                    low = low->next;
                    high = high->next;
                }         
                high->next = NULL;
              }
        }
    }
