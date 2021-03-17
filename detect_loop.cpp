#include<iostream>
#include<map>
using namespace std;

/* Approach 1 Using Hash map
TC - O(N)
SC - O(N) */

bool detectLoop(Node *head){
	if(!head) return false;
	unordered_map<Node *,int> m;
	if(!m[head]){
		m[head] = 1;
		head = head->next;
	}else return true;
	}
	return false;
}

/* Approach 2 Using Tortoise/Dutch Flag Method
TC - O(N)
SC - O(N) */

bool detectLoop(Node *head){
	if(!head) return false;
	Node *low = head;
	Node *high = head;
	while(high !=NULL && high->next!=NULL){
		low = low->next;
		head= head->next->next;
		if(low==high){
			return true;
		}
		return false;
	}

}