#include<iostream>
using namespace std;
struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node * cur = head;
        node * prev = NULL;
        node * next;
        int c=0;
        while(cur!=NULL && c<k){
            next = cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        if(next!=NULL)
            head->next=reverse(next,k);
        return prev;
    
};
