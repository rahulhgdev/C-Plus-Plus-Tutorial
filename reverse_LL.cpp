#include<iostream>
using namespace std;
struct Node* reverseLL(struct Node* head){
    Node*cur = head;
    Node*prev = NULL;
    while(cur!=NULL){
        Node*next = cur->next;
        cur->next = prev;
        prev=cur;
        cur=next;
    }
    head = prev;
    return head;
}