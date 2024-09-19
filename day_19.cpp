#include<iostream>

using namespace std;


/*
       recursion
*/




// void func(int n){
      
//            if (n == 0)
//            {
//               return ;
//            }
           

//       cout<<"function call..work"<<endl;
      
         

//       func(n-1);
// }

// int main(){

//     func(5);

//     return 0;
// }





/*
    print number in decreasing order
*/




// void decreasing(int n){
    
//     if (n == 0)
//     {
//         return;
//     }
          
//     //   cout<<n<<" ";  // for decreasing order before resursion func call
    
//     decreasing(n-1);

//     cout<<n<<" ";     // for increasing order after the recursion func call 

// }

// int main(){
      
//       decreasing(5);
// }



/*
   sum of n natural number using recursion
*/



// int func(int n){

//     int sum;

//     if (n == 0)
//     {
//         return sum;
//     }
    

//         sum = sum+n;
   
//         func(n-1);

// }

// int func(int n){
       
//        if (n == 1)
//        {
//          return 1;
//        }

//        return n + func(n-1);
       
// }


// int main(){

//     int n = 1;
      
//      cout<<"sum of n is "<<func(n)<<endl;

//     return 0;
// }




/*

   fibonacci using recursion

*/


// int fibo(int n){

    
//    if (n==0 || n == 1)
//    {
//       return n;
//    }
   

//     return fibo(n-1)+fibo(n-2);
// }



// int main(){

//    cout<<fibo(10);

//     return 0;
// }


/*
   check array sorted or not
*/



bool isSorted(int arr[] , int n , int i){

          if (i == n-1)
          {
              return true;
          }
          

             if (arr[i] > arr[i+1])
             {
                 return false;
             }
             
          
          isSorted( arr, n , i+1);

}



int main(){
      
      int arr[] = {1,2,4,5};

      int n = sizeof(arr)/sizeof(arr[0]);

     if (isSorted(arr,n,1))
     {
         cout<<"array sorted";
     }else
        cout<<"un sorted";
      

    return 0;
}