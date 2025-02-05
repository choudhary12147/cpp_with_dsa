#include<bits/stdc++.h>
using namespace std;

class Node{
    
      public: 
     Node *prev;
     int data;
     Node *next;


     Node(int val){
        this->data = val;
        this->prev = nullptr;
        this->next = nullptr;
     }

};

class doublylist{
  
  public:

   Node*head;
   Node*tail;

   doublylist(){
      head = tail = nullptr;
   }

  void push_front(int val){
       Node *newnode = new Node(val);

       if (head == nullptr)
       {
              head = tail = newnode;
       }else{
            
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
       }
       
  }


  void pop_front(){

      Node*temp = head;

      head = temp->next;

      temp->next = nullptr;

       delete temp;

  }

  void push_back(int val){
        
        Node*newnode = new Node(val);

       if (tail == nullptr)
       {
            head = tail = nullptr;
       }else
       {
            newnode->prev = tail;
            tail->next = newnode;
            tail = newnode;
       }
       
       
  }

  void pop_back(){

         Node*temp = tail;

         tail = temp->prev;
         tail->next = nullptr;

           temp->next = nullptr;
            temp->prev = nullptr;

           delete temp;
  }


  void printdll(){

        Node*temp = head;
        while (temp != nullptr)
        {
              cout<<temp->data<<" <-> ";
              temp = temp->next;
        }
          cout<<"null";
  }

};



int main(){

    doublylist ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.printdll();
    ll.pop_front();
    ll.push_back(4);
    ll.push_back(5);
    ll.printdll();
    ll.pop_back();
    ll.printdll();
    

    return 0;
}


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
