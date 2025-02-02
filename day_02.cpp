/*
      operator and type casting 
*/



/*
        typecasting -> two type 
        1. implicit conversion(automatic/type promotion)
        2.expicit conversion
 
*/


/*
   ****  implicit conversion(automatic/type promotion) -> done by complier to avoid data loss ***

   o/p on the basic of big size data type

   example

    sequence of o/p when operation is applied on the two different data type

    bool->char->int->float->double

*/

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
 
//    cout<<(10/3.00)<<endl;
//    cout<<(20+100.0001)<<endl;   // hear the float number have big size of data that's why its o/p is float 
//   cout<<(20+01.000)<<endl;  // o/p is 21 exception


//   cout<<('A'- 0);   // o/p is int the int value of A because int is big size data type here 
 
//   return 0;
// }








/*
   explicit  typecasting
*/


#include<bits/stdc++.h>

using namespace std;

int main(){
        cout<<(int)('A');

  return 0;
}








/*
   q.1  predict output of cout<<(bool)3+2;

*/



// #include<iostream>

// using namespace std;

// int main(){


    //   cout<<(bool)3 + 2<<endl;   // bool is type that's why 3 is converted  into 1 and after that 2 is added to 1 and o/p is 3 
       
    //    cout<<(23.5 + 2 + 'A');  // 65 + 2 + 23.5  = 90.5
     
     
//    int x = 2 , y = 5;

//    int exp1 = ( x*y/x );

//    int exp2 = ( x *  (y/x));
   

//    cout<<exp1<<",";
//    cout<<exp2<<"\n";


//  int x = 10, y = 5;
// int exp1 = (y * (x / y + x / y)); 
// int exp2 = (y * x / y + y * x / y); 
// cout << exp1 << " ";
// cout << exp2 << "\n";
 
//   int n , m;
   
//    char ch ;
//   cin>>n>>m; 
//   cin>>ch;

//   switch (ch)
//   {
//   case '+':
   
//    cout<<(n +  m);
       
//     break;
  
//   default:  cout<<"i dont know";
//     break;
//   }
  






//     return 0;
// }


