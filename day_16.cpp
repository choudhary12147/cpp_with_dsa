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



// int main(){

//     int n ;

//     cout<<"enter the value of n :"<<endl;
//     cin>>n;

//     if ((n&1) == 0)
//     {
//        cout<<"number is even"<<endl;
//     }else
//     {
//       cout<<"number is odd"<<endl;
//     }
    
//   return 0;
// }


/*
     get ith bit is one or zero
*/



// int checkbit(int num , int ith){
       
//        int bitmask = 1<<ith;
             
//              if ((num&bitmask) == 0)
//              {
//                 cout<<"bit is zero "<<endl;
//              }else
//              {
//               cout<<"bit is one "<<endl;
//              }
             
// }


// int main(){
  
//   int num , ith;
     
//      cin>>num;
//      cin>>ith;

//    cout<<checkbit(num,ith)<<endl;

//   return 0;
// }

/*
  mainpulate ith bit of num
*/


// int setithbit(int num , int i){
             
//              int bitmask = 1<<i;

//              return num|bitmask;
// }

// int main(){

//        int num,i;

//         cin>>num>>i;
//        cout<<setithbit(num,i);
//   return 0;
// }

/*
    clear ith bit

*/

// int clearbit(int num , int ith){

//         int bitmask = ~(1<<ith);

//         return num&bitmask;  
  

// }

// int main(){
         
//          int num , ith;
//          cin>>num>>ith;
//          cout<<clearbit(num,ith)<<endl;

// }



/*
   power of 2
*/



// bool checkpower(int num){
         
//          if ((num & (num-1)) == 0)
//          {
//               return 1;
//          }else
//          {
//           return 0;
//          }
         
// }

// int main(){
     
//      int num;

//      cin>>num;

//      if(checkpower(num)){
//       cout<<"yes";
//      }else
//      {
//       cout<<"not";
//      }
     

//   return 0;}


/*
     update ith bit in num
     1. num = 7 ,i = 2, val = 0;
     2. num = 7 , i = 3, val = 1;
*/



// int update1(int num , int ith){
          
//           int bitmask = ~(1<<ith);

//           return num&bitmask;
// }

// int update2(int num , int ith){

//         int bitmask = 1<<ith;

//         return num|bitmask; 
// }

// int main(){

//      int num = 7;
      
//       cout<<update1(num,2)<<endl;
//       cout<<update2(num,3)<<endl;
// }



/*
      clear last ith bit of a number
      num = 15,i = 2;
*/



// int clearlasti(int num ,int ith){
             
//               int bitmask =  (~0)<<ith;

//               return bitmask & num ;

// }


// int main(){
//          int num = 15;
//          int i = 2;
           
//           cout<<clearlasti(num,i)<<endl;;

//     return 0;
// }




/*
   count setbit
*/




// int countsetbit(int num){

//        int count = 0;
//         while (num > 0)
//         {
//              int l_digit = num&1;

//                count += l_digit;
//                num = num>>1;
 
//         }
        

//           return count; 

// }

// int main(){
          
//           int num = 10;

//         cout<<countsetbit(num)<<endl;

//     return 0;
// }







/*
     fastexpo
*/




// int fastexpo(int n , int x){
           
//            int ans = 1;

//            while (n>0)
//            {
//                 int lastBit = n&1;
                
//                 if (lastBit)
//                 {
//                     ans = ans*x;
//                 }
                
//                 x = x*x;
                
//                 n = n>>1;
//            }

//            cout<<ans;
//            return ans;
           
// }

// int main(){
    
//     int n = 5;
//     int x  = 3;

//     fastexpo(n,x);

//     return 0;
// }



/*
  Question 1 : Write a Function to clear the range of bits from i to j in a given number. (i 
                & j are counted backwards from the right end of the number)
                Examples :
                 Input : num = 15, i = 1, j = 3 
                 Output : 1
                
                Explanation :
                     15 in binary form is => 00001111 [i=1st & j=3rd bit underlined] 
                         After bits are cleared, number will become 00000001
                  Input : num = 31, i = 1, j = 3
                 Output : 17

                   Note - Think about what type of bit mask is needed. It can also be a combination of 2 
                               numbers

*/


int clearrangebit(int num ){
          
             int bitmask = ~(7<<1);
                
                return bitmask&num;

}


int main(){
          
          cout<<clearrangebit(31)<<endl;

    return 0;
}