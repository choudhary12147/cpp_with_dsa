#include<iostream>

using namespace std;

   // binomial coefficient //


// int fact(int n ){
//             int fact = 1;

//             for (int i = 1; i <=n ; i++)
//             {
//                 fact*=i;
//             }
            
     
//       return fact ;
//    }

//  int binomialcoef(int n , int r){
             
//        int n_f = fact(n);
//        int r_f = fact(r);
//        int n_1f = fact(n-r);

//       int B_coef = n_f/ ( r_f*n_1f) ;

      
//       return B_coef;

//  }

// int main(){

//          int n,r;
//          cin>>n>>r;

//         cout<<binomialcoef(n,r);


//     return 0;
// }


// function overloading :- same name of fun. but diff. parameters
   


// void sum(double n, double m){
//           int sum = n*m;

// }

// void sum(int n , int m ){
//     int sum = n*m;
// }

// int main(){

//       sum (2 , 3);
//       sum(2.678, 3.456);
//     return 0;
// }



// all prime from the range of 2 to n



// void prime(int n){
      
//        for (int i = 2; i <= n; i++)
//        {
//           int curr = i;

//           bool isprime = true;
          
//           for (int j = 2; j*j <= curr; j++)
//           {
//                   if (curr % j == 0)
//                   {
//                      isprime = false;
//                   }
          
//           }
         
//     if (isprime)
//           {
//              cout<<curr;
//           }
         
           

//        }
      
// }

// int main(){
//        prime(20);
//     return 0;
// }



// palindrome


int reverse(int n){
    
    int reverse = 0;

     while (n > 0)
     {
        int last_digit = n%10;

    reverse = last_digit + reverse*10;
     
     n = n/10;
        
     }
       cout<<reverse;
        return reverse;
}

bool ispalin(int num){
        
        if (num == reverse(num)  )
        {
            return true;
        }
        

     
}

int main(){

    int n;
    cin>>n;

     if (ispalin(n))
     {
        cout<<"number is palindrome"<<endl;
     }else
     {
        cout<<"not a palindrome"<<endl;
     }
     
     

}