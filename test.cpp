#include<iostream>

using namespace std;


/*

multiple inheritance

1 using constructor pass the value of variable 
2. create four func two in one class and another two in another class 
3. call function in derived class

*/


// class base1{
  
//   public:

//       int a;
//       int b; 

//   base1(int a , int b){
//        this->a = a;
//        this->b = b;
//   }

//      void add(){
//           cout<<"add is = "<<a+b<<endl;
//      }
    
//       void sub(){
//         cout<<"sub is = "<<a-b<<endl;
//       }


// };
// class base2{

//      public:

      

//       void mul(){
            
//             cout<<"mul is = "<<a*b<<endl;
         
//       }

//       void div(){
//           cout<<"divide is = "<<a/b<<endl;
//       }

// };

// class derived : public base1,public base2{

//      public:  

//        void callfuns(){
          
//              add();
//              sub();
//              mul();
//              div();

//        }
      
// };


// int main(){


//      derived d1;

//      d1.callfuns();

     
//     return 0;
// }

/*

  number of time a array element repeat

*/

void count(int arr[] , int n){

     
     int arr1[100] = {0};
    
       for (int i = 0; i < n; i++)
       {
             arr1[arr[i]]++;
       }
       
       for (int i = 0; i < n; i++)
       {
            cout<<"element "<<arr[i]<<"is"<<arr1[arr[i]]<<"times"<<endl;
       }
       

    

}

int main(){

      int arr[] = {1,2,3,4,1};

      int n = sizeof(arr)/sizeof(arr[0]);

      count(arr,n);


    return 0;
}