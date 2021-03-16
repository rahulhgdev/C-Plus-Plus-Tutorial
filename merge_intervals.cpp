#include <iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

/* Approach 1 - 1) In this, we willl check last element of 1st pair & 1st element of last pair considering start is 1st
pos & end as 2ns pos and if end>=start i.e. pair is mergable.
2) Now we'll take a stack and push  pair by checking above conditon. We'll also check whether last element of 1st pair and
with last element of next pair which one is greater and push which is greater in the stack.
3) If above  conditon doesn't satisfy we will push that pair to stack too 
TC - O(NlogN)
SC - O(N)   */

int main()
{
   int n; cin>>n; int i;
   vector<pair<int,int>> a;
   for(i=0;i<n;i++){
       int x,y; cin>>x>>y;
       a.push_back({x,y});
   }
   sort(a.begin(), a.end());
   
   stack<pair<int,int>> s;
   s.push({a[0].first,a[0].second});
   for(i=1;i<n;i++){
       int start1 = s.top().first;
       int end1 = s.top().second;
       int start2 = a[i].first;
       int end2 = a[i].second;
       
       // checkig condition if not satisfied
       if(end1<start2){
           s.push({start2,end2});
       }else{
           s.pop();
           end1 = max(end1, end2);
           s.push({start1,end1});
       }
   }
   while(!s.empty()){
       cout<<s.top().first<<" "<<s.top().second<<endl;
       s.pop();
   }
   return 0;
}


/* Approach 2 - 1) In this approach we'll take iterator(i) and check end1 with start2 if it greater i.e end1>=start2 then it is mergable then we'll i and index will be where it was.
2) If abive condition not satisfied then we'll move index not i and replace pair ith with index. We'll get mergable pair till index. 
TC - O(NlogN)
SC - O(1)   */