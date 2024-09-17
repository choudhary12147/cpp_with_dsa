#include<iostream>

using namespace std;


/* bitwise AND nd OR */

// int main(){

//   int a = 5;
//   int b = 3;

//   cout<<(a|b)<<endl;


//     return 0;
// }

/*
    1.  ~   compliment operator 
    2. left shift << and >> right shift .
*/

// int main(){

//    int a = 4;

//    cout<<(~a)<<endl;

//    cout<<(a>>1)<<endl;  // a/2^b  hera a is given and b = 1 that is nummber time we wanna shift 

//   return 0;
// }

/*
    check if odd or even  using bit  manipulation

*/

int main(){

    int n ;

    cout<<"enter the value of n :"<<endl;
    cin>>n;

    if ((n&1) == 0)
    {
       cout<<"number is even"<<endl;
    }else
    {
      cout<<"number is odd"<<endl;
    }
    
    

  return 0;
}