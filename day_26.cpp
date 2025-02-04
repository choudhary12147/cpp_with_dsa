#include<bits/stdc++.h>
using namespace std;

class Node{
    
     Node *prev;
     int data;
     Node *next;

   public:

     Node(int val){
        this->data = val;
        this->prev = nullptr;
        this->next = nullptr;
     }

}

class doublylist{
  
  public:

   Node*head;
   Node*tail;

   doublelist(){
      head tail = nullptr;
   }

  void push_front(int val){
       Node *newnode = new Node(val);

       if (head == nullptr)
       {
              head = newnode;
       }else{
            
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
       }
       
  }

}



int main(){

  //   list <int> ll;

  //   ll.push_front(1);
  //   ll.push_back(2);
     
  //   for(auto it : ll){

  //       cout<<it<<endl;
  //   }

   
  //  ll.insert(ll.begin(),5);

  //    list<int> :: iterator itr;

  //  for (itr = ll.begin();itr != ll.end();itr++)
  //  {
  //         cout<<(*itr)<<" -> ";
  //  }











    return 0;
}