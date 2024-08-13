/*
      operator and type casting 
*/

/*
   q.1  predict output of cout<<(bool)3+2;

*/


#include<iostream>

using namespace std;

int main(){


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
 
  int n , m;
   
   char ch ;
  cin>>n>>m; 
  cin>>ch;

  switch (ch)
  {
  case '+':
   
   cout<<(n +  m);
       
    break;
  
  default:  cout<<"i dont know";
    break;
  }
  






    return 0;
}


