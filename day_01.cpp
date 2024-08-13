/*  


 Question 1 : In a program, input the side of a square. You have to output the area of
      the square.

 Input  : n (side) 
 Output : n*n (area


*/


#include<iostream>

using namespace std;

int main(){
            
             int n;
             
             cout<<"enter the value of side n "<<endl;
             cin>>n;
          
          int area  = n*n;

          cout<<area<<endl;



    return 0;
}



/* 
    Question 2 : Enter cost of 3 items from the user (using float data type) - a pencil, a
                pen and an eraser. You have to output the total cost of the items back to the user as
                their bill.
              (Add on : You can also try adding 18% GST tax to the items in the bill as an advanced problem)
  
*/


int main(){

         float pencil_p , pen_p , eraser_p;
           
           cout<<"enter the price of pencil "<<endl;
           cin>>pencil_p;
           cout<<"enter the price of pen "<<endl;
           cin>>pen_p;
           cout<<"enter the price of eraser "<<endl;
           cin>>eraser_p;


      float total_cost = pen_p + pencil_p + eraser_p ;

      cout<<"total price of iteam :"<<total_cost;    

    return 0;
}


/*

   Question 3 :  Build a Simple Interest Calculator.
        Input :  principal (P), rate (R), time (T)
       Output : (P*R*T) / 100


*/


  int main(){
       
       int p , r , t ;
       
       cout<<" enter the value of princple , rate and time "<<endl;
       cin>>p>>r>>t;
         
         int si = p+r+t/100;
         cout<<"simple interest is equal to "<<si<<endl;

    return 0;
  }


/*
     Question 4 : Write a program to calculate the area of a circle.
          Input : r (radius)
         Output : PI*r*r (area)

*/

int main(){
               
               int radius;
               
               const float pi = 3.14;

              cout<<"enter the value of radius "<<endl;
              cin>>radius;

              cout<<"the area of circle is "<<radius;

    return 0;
}