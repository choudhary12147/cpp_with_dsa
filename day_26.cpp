#include<bits/stdc++.h>
using namespace std;

int main(){

    list <int> ll;

    ll.push_front(1);
    ll.push_back(2);
     
    for(auto it : ll){

        cout<<it<<endl;
    }

 
   
   ll.insert(ll.begin(),5);

     list<int> :: iterator itr;

   for (itr = ll.begin();itr != ll.end();itr++)
   {
          cout<<(*itr)<<" -> ";
   }

    return 0;
}