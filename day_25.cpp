/* link list */
#include<bits/stdc++.h>
using namespace std;

//1. link list implementation


// node
class Node{
   public:

    int data;
    Node * next;

  ~Node(){
         
         if (next != NULL)
         {
             delete next;

             next =NULL;
         }
         

  }


   Node(int val){
             data = val;
             next = nullptr;
   }
  
};

// link list -> collection of nodes

class List{
       
       Node *head;
       Node *tail;
      

    public:

       List(){
           head = nullptr;
           tail = nullptr;
       }

       ~List(){
           if (head != nullptr )
           {
                delete head;
                head = nullptr;
           }
           
       }
      
       void push_front(int val){

            Node*newnode = new Node(val);

            if (head ==  nullptr)
            {
                 head = tail = newnode;
            }else
            {
                newnode->next = head;
                head = newnode;    
            }
            
       }
    
      void push_back(int val){
             
              Node *newnode =  new Node(val);

              if (head == nullptr)
              {
                   head = tail = newnode;
                      
              }else
              {
                
                 tail->next = newnode;
                 tail =  newnode;
                  
              }
              
      }


   void insert(int val, int indx){
            
            Node *newnode = new Node(val);

            Node *temp = head;
          
          for (int i = 0; i < indx-1; i++)
          {

              temp = temp->next ;
                 
          }          
             newnode->next = temp->next;
                temp->next = newnode;
                   

   }
   
   void pop_front(){

        Node*temp = head;
     
        head =  temp->next;
         
         temp->next = nullptr;

         delete temp;

   }

   void pop_back(){
     
       Node* temp = head;
    
        while (temp->next != tail)
        {
              temp = temp->next;
        }
        temp->next = nullptr;
    
        delete tail;
         tail = temp; 
   }


  void printll(){
  
       Node*temp = head;

       while (temp != nullptr)
       {
           cout<<temp->data<<" -> ";

           temp =  temp->next;
       }
       
         cout<<" null ";
  }

      
  int serach(int key){

       
        //  int indx = 0;
         // Node*temp = head;
        //   while (temp != nullptr)
        //   {
        //         if (temp->data == key)
        //         {
        //             return indx;
        //         }
                
        //         temp = temp->next;

        //          indx++;        
        //   }

     return  helper(key,head,0);
        
             
  }


  int helper(int key, Node*temp,int indx){
           
           if (key == temp->data)
           {
                return indx;
           }
           if (temp == nullptr)
           {
              return -1;
           }
           
           
        helper(key,temp->next,indx+1);

  }

  void reverse(){

      Node* curr = head;
      Node* prev = nullptr;
    

      while (curr != nullptr)
      {
         Node*next = curr->next;
         curr->next = prev;

         prev = curr;
         curr = next; 
      }
       
    head = prev;

  }


};



int main(){
   
     List ll;

     // four special functions

     //pushback , pushfront , popback , popfront

     
     ll.push_back(3);
     ll.push_back(4);
      ll.printll();
      ll.push_front(2);
      ll.printll();
      ll.insert(5,2);
      ll.printll();
      ll.pop_front();
      ll.printll();
      ll.push_back(6);
      ll.push_back(7);
      ll.pop_back();
      ll.printll();


       cout<<ll.serach(6);
       ll.reverse();
       ll.printll();

    return 0;
}

