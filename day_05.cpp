
/*
   Q.1  using while loop print sum of a digit 10829
*/


#include<iostream>
#include<cmath>
using namespace std;

int main(){

        int n = 10829 ;
        
        int digitsum = 0;


      while (n > 0)
      {

          

          int lastdigit = n %10;

             if (lastdigit %2 != 0)
             {
                  digitsum += lastdigit;
             }
            

          n/= 10;
         
      }

      cout<<"sum of digit is "<<digitsum<<endl;
      


    return 0;
}


/*   
    Q.2 using while reverse the number  n .


*/


int main(){

         int n;
        cout<<"enter the value of n"<<endl;
         cin>>n;

       while (n > 0)
       {
           int last_digit = n %10;
           
           cout<<last_digit;

           n/= 10;


       }
       


    return 0;
}


/*
   Q.3 reverse a given number & print the result .

*/


int main(){
            
            int n;
            cin>>n;
            int result = 0;
       
       while (n > 0)
       {
           int  last_d = n%10;
            
            result =  result*10 + last_d;

             n/= 10;

       }
       
       cout<<result<<endl;

    return 0;
}


/*
    Q.4   WAP  where user can keep entering numbers till they enter a multiple of 10 
*/

int main(){
    
    int num ;
      
      while (1>0)
      {
        cin>>num;

        cout<<"number is "<<num<<endl;

       if (num%10 == 0)
       {
           break;
       }
       

      } 
     
    return 0;
}


/*
   Q.5 WAP to show numbers entered by users expect multiple of 10 .
*/


int main(){
          
          int num;

        do
        {
              cin>>num;
            
            if (num%10 == 0)
            {
                cout<<"enter number is multiple of 10"<<endl;

                continue;
            }
            
            cout<<"number is "<<num<<endl;


        } while (1>0);
        
         
    return 0;
}


/*  Q.6  check if a number is prime or not   */



int main(){
       
       int num ;
       bool isprime = true;
       cin>>num;

         if (num == 1)
         {
            isprime = false;
         }
         
       for (int i = 2; i < num ; i++)
       {
              if ( num % i == 0)
              {
                   isprime = false;
              }            
               
       }
       

      if (isprime == true)
      {
            cout<<"number is prime "<<endl;
      }else
      {
        cout<<"number is not prime "<<endl;
      }
      

    return 0;
}


// Q.7 optimized the prime number check programe by using time complexitity


int  main(){
        
        int num ;
        
        bool isprime = true;
    
    cout<<"enter the number ";
      cin>>num;
     
      for (int i = 2; i*i <= num; i++)
      {
           if (num % i == 0)
           {
               isprime = false;
               break;
           }
           
      }
      


    if (isprime == true)
    {
        cout<<"number is prime"<<endl;
    }
    else
    {
        cout<<"number is not prime "<<endl;
    }
    

    return 0;
}




/*
   Question 8 : WAP to find the Factorial of a number entered by the user.
*/




int main(){
          
          int n ;
           
           int fact = 1;
           
          cin>>n;

          int fact1 = n;

          for (int i = 1; i <= n ; i++)
          {
                 fact *= i;

              
                fact1  =   fact1*(n-i);  // for this method  i < n in for loop for check condition

          }
          
     cout<<fact<<endl;

     cout<<fact1<<endl;

    return 0;
}





/*
   Question 9 : WAP to print the multiplication table of a number, entered by the user.

*/




int main(){

         int num ;

         cin>>num;

         for (int i = 1; i <= 10; i++)
         {
               int num1 = num * i ;

               cout<<num1<<endl; 
         }
         
    return 0;
}



/*
Question 10 : WAP to input a number and check whether the number is an Armstrong
         number or not.
*/



int main(){

       int num;
       cout<<"enter the number : "<<endl;
       cin>>num;
       int sumofcube = 0;

       while (num > 0)
       {
             int lastdigit = num%10;
             
             sumofcube += lastdigit*lastdigit*lastdigit;
             
             num /= 10;

       }
        
       if (sumofcube == num)
       {
          cout<<"number is armstrong"<<endl;
       }else
       {
        cout<<"number is not a armstrong"<<endl;
       }
     
}

/*
  Question 4 : For a positive N , WAP that prints all the prime numbers from 2 to N.
               (Assume N >= 2)

*/

int main(){
              
              int n ;
              cin>>n;


           for (int i = 2; i <= n; i++)
           {
              int curr = i;

              bool isprime = true;

              for (int j = 2 ; j*j <= curr; j++)
              {
                
                 if (curr % j == 0)
                 {
                       isprime = false;  
                 }
                 

              }
               
               if (isprime)
               {
                  cout<<" "<<curr;
               }
               

         

           }
           

    return 0;
}


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
         

         int n ;
         cin>>n;

        int a = 0;
        int b = 1;
    
       cout<<a<<" "<<b;

    
       for (int i = 2; i < n; i++)
       {
           int c = a+b;

           cout<<" "<<c;
           
           a = b;
           b = c;


       }
       


}