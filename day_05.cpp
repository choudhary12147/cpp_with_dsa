
/*
   Q.1  using while loop print sum of a digit 10829
*/


#include<iostream>
#include<cmath>
using namespace std;

// int main(){

        
//        int n  = 10829;


//        int sum = 0;


//        while (n > 0)
//        {
          
//               int last_digit = n%10;
                  
//                 sum += last_digit;

//                 n/=10;

//        }

//        cout<<sum; 
        
//     return 0;
// }


/*   
    Q.2 using while reverse the number  n .


*/


// int main(){

//       int n = 23567;

//          int reverse = 0;

//       while (n>0)
//       {  

//           if (reverse>0)
//           {
//              reverse*=10;
//           }
          
             
//              int last_digit = n%10;


//              reverse+=last_digit;
                
//              n/=10;

         
//       }

//       cout<<reverse;
      

//    return 0;
// }

/*
   Q.3 reverse a given number & print the result .

*/


// int main(){

//     int n = 89342;

//      int result = 0;
      
//     while (n>0)
//     {
        
            
//            int last_digit = n%10;

//            result = result*10 + last_digit;


//            n/=10;

//     }

//     cout<<result;
    


//    return 0;
// }


/*
    Q.4   WAP  where user can keep entering numbers till they enter a multiple of 10 
*/

// int main(){

//  int num ;

//  while (num>0)
//  {
  
//      cin>>num;
//          if (num%10 == 0)
//          {
//             break;
//          }
//       cout<<num;   
         
//  }
 
//    return 0;
// }
    



/*
   Q.5 WAP to show numbers entered by users expect multiple of 10 .
*/


// int main(){

//   int n;

//  do
//  {
//      cin>>n;

//      if (n%10 == 0)
//      {
//        cout<<"enter number is multiple of 10";
//        cout<<n;
//        continue;
//      }

//      cout<<n;
     
//  } while (n>0);
 
     

//    return 0;
// }


/*  Q.6  check if a number is prime or not   */



// int main(){

//    int n;
//    bool isprime =  true;
//    cin>>n;


// if (n == 1)
// {
//     isprime = false;
// }

//    for (int i = 2; i < n; i++)
//    {
//         if (n%i == 0)
//         {
//           isprime = false;
//         }
        
//    }

//    if (isprime)
//    {
//        cout<<"yes prime";
//    }
//    else
//    {
//        cout<<"not a prime";
//    }
      


//    return 0;
// }


// Q.7 optimized the prime number check programe by using time complexitity


// int  main(){
        
//         int num ;
        
//         bool isprime = true;
    
//     cout<<"enter the number ";
//       cin>>num;
     
//       for (int i = 2; i*i <= num; i++)
//       {
//            if (num % i == 0)
//            {
//                isprime = false;
//                break;
//            }
           
//       }
      


//     if (isprime == true)
//     {
//         cout<<"number is prime"<<endl;
//     }
//     else
//     {
//         cout<<"number is not prime "<<endl;
//     }
    

//     return 0;
// }




/*
   Question 8 : WAP to find the Factorial of a number entered by the user.
*/



// int main(){

//       int n ;

//       cin>>n;

   
//    int ans = 1;
 
//     for (int i = 1; i <= n; i++)
//     {
//               ans =  ans*i;
//     }
    
// cout<<ans;

//    return 0;
// }





/*
   Question 9 : WAP to print the multiplication table of a number, entered by the user.

*/


// int main(){


//    int n = 10;

//    for (int i = 1; i <= 10; i++)
//    {
//       cout<<i*n<<"\n";
//    }
   
//    return 0;
// }






/*
Question 10 : WAP to input a number and check whether the number is an Armstrong
         number or not.
*/

// #include<cmath>  // using pow method

// int main(){
//    int num;
//    cin>>num;

//     int original = num;

//    int temp = num;

  

//    int digit = 0;

//    while (temp>0)
//    {
//         digit++;
//         temp/=10;
//    }


//    int sum = 0;

//    while (num>0)
//    {
//         int last_digit = num%10;
            
//           sum = sum+ static_cast<int>(last_digit,digit);

//           num/=10;

//    }

//    if (sum == original)
//    {
//       cout<<"yes";
//    }else
//    {
//       cout<<"no";
//    }
   

//    return 0;
// }



/*
  Question 4 : For a positive N , WAP that prints all the prime numbers from 2 to N.
               (Assume N >= 2)

*/



// int main(){

//       int N;
//       cin>>N;




//       for (int i = 2; i < N; i++)
//       {

//           bool is_prime = true;


//          for (int j = 2; j < i; j++)
//          {

//             if (i%j == 0)
//             {
//                 is_prime = false;
//                 break;
//             }    
              
//          }


// if (is_prime)
// {
//    cout<<i<<" ";
// }



//       }
      


//    return 0;
// }





















// int main(){
              
//               int n ;
//               cin>>n;


//            for (int i = 2; i <= n; i++)
//            {
//               int curr = i;

//               bool isprime = true;

//               for (int j = 2 ; j*j <= curr; j++)
//               {
                
//                  if (curr % j == 0)
//                  {
//                        isprime = false;  
//                  }
                 

//               }
               
//                if (isprime)
//                {
//                   cout<<" "<<curr;
//                }
               

         

//            }
           

//     return 0;
// }




/*
    Question 5 : For a positive N , WAP that prints the first N Fibonacci numbers.
                (Assume N >= 2)
                Fibonacci series : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ….
                This is a series where each number is a sum of previous 2 numbers in the series.Eg
                : 1 = 0 + 1, 
                2 = 1 + 1,
                3 = 1 + 2,
                5 = 2 + 3,
                8 = 3 + 5 & so on.


*/



int main(){

   int n = 10;

   int a  = 0;
   int b = 1;

   cout<<a<<" "<<b<<" ";

   for (int i = 2; i < n; i++)
   {
        
           int c = a+b;
            cout<<c<<" ";

             a = b;
             b = c;
   }
   


   return 0;
}










// int main(){
         

//          int n ;
//          cin>>n;

//         int a = 0;
//         int b = 1;
    
//        cout<<a<<" "<<b;

    
//        for (int i = 2; i < n; i++)
//        {
//            int c = a+b;

//            cout<<" "<<c;
           
//            a = b;
//            b = c;


//        }
       


// }