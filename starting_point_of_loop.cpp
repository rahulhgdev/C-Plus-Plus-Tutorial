#include <iostream>
using namespace std;

/* Approach 1 - In 1st step we take 2 pointers low(inc by 1) and high(inc by 2) if low==high then in
 2nd step we will set low to head and high to where it was.
 In 3rd step We check whether low and high are pointing at 1(starting of loop) in step 2 then check condition high->next !=low */

int main()
{
    Node * low = head;
    Node * high = head;
     while(low!=NULL && head!=NULL && head->next!=NULL){
            low = low->next;           //step 1
            high = high->next->next;
            if(low==high){
                break;
            }
            if(low!=high) return  NULL;
            low = head;			// step 2
            while(low!=high){		// step 3
                low=low->next;
                high=high->next;
            }
          
        }  return low;
    }
}
