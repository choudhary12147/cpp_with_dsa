/*  pattern  */


// #include<iostream>

// using namespace std;

/* Q.1 
          *
          * *
          * * *
          * * * *
 
*/

// int main(){
//     int n = 4; // because there is 4 row and col
//     for (int i = 0; i < n; i++)
//     {
//         //this for loop is for row
//         for (int j = 0; j <= i; j++)
//         {
//           // this for is for col in this pattern * is equal to the row in col
//           cout<<"*";
//         }
//         cout<<endl;  // this is next line after the row
        
//     }
    


//    return 0;
// }


 





/* 
   Q.2 inverted pattern  * * * *
                         * * *
                         * *
                         * 
*/

// int main(){

//          int n = 4;

//          for (int i = 0; i < n; i++)
//          {
//             for (int j = 0; j < n - i; j++)
//             {
//                  cout<<"*";
//             }
//               cout<<endl;
//          }

//     return 0;
// }


/*  
     Q.3  half pyramid pattern 
                              1
                              1 2
                              1 2 3
                              1 2 3 4

*/

// int main(){
//            int n = 4;

//            for (int  i = 1; i <= n; i++)
//            {
//                    for (int j = 1; j <= i; j++)
//                    {
//                       cout<<j;
//                    }
//                    cout<<endl;
//            }
           
//     return 0;
// }



/*
      Q.4 character pyramid pattern.
                     A
                     B C
                     D E F
                     G H I J

*/



// int main(){
       
//        char ch = 'A';
//        int n = 4 ;

//        for(int i = 0; i < n; i++)
//        {
//            for (int j = 0; j <= i; j++)
//            {
//                   cout<<ch;
//                   ch++;
//            }
//               cout<<endl;   
//        }

//     return 0;
// }



/* 
     Q.5  hollow pattern 
       
        * * * *
        *     *
        *     *
        * * * *
*/

// int main(){
//          int n = 4;
//          for (int i = 1; i <= n; i++)
//          {
//             for (int j = 1; j <= n; j++)
//             {
//                 if (i == 1 || i == n || j == 1 || j == n )
//                 {
//                     cout<<"*";
//                 } else
//                 {
//                      cout<<" ";
//                 }              
//             }

//             cout<<endl;
            
//          }
         
//     return 0;
// }


/*
    Q.6 inverted and rotated half - pyramid
            *
          * *
        * * *
      * * * *
*/

// int main(){

//          int n = 4;
//          for (int i = 1; i <= n; i++)
//          {
//             for (int j = 1; j <= n; j++)
//             {
//                  if (j <= n - i )
//                  {
//                     cout<<" ";
//                  }else
//                  {
//                     cout<<"*";
//                  }
                              
//             }
//             cout<<endl;
//          }
         
//     return 0;
// }

/*
   Q.7  1
        2 3
        4 5 6
        7 8 9 10
        11 12 13 14 
*/


// int main(){
       
//        int n = 5;

//        int num = 1;

//        for (int i = 0; i < n; i++)
//        {
//           for (int j = 0; j <= i; j++)
//           {
//               cout<<num<<" ";
//               num++;
//            }
//           cout<<endl;
//        }
       

//    return 0;
// }


/* Q.8  
                       *
                     * * *
                   * * * * *
                 * * * * * * *
                 * * * * * * *
                   * * * * *
                     * * *
                       *


*/
   
  //  int main(){
           
  //          int n = 4;

  //          for (int i = 1; i <= n; i++)
  //          {
  //              //for space
  //              for (int j = 1; j <= n-i; j++)
  //              {
  //                 cout<<" ";
  //              }
  //              // for star
  //              for (int j = 1; j <= 2*i - 1; j++)
  //              {
  //                 cout<<"*";
  //              }

  //              cout<<endl;
               
  //          }

  //          for (int i = n; i >= 1; i--)
  //          {
  //             // for space

  //             for (int j = 1; j <= n-i; j++)
  //             {
  //                 cout<<" ";
  //             }

  //             // for star

  //             for (int j = 1; j <= 2*i - 1; j++)
  //             {
  //                    cout<<"*";
  //             }
              
  //             cout<<endl;  
  //          }
           

  //     return 0;
  //  }


/*
   Q.10  butterfly pattern
 */

// int main(){
//      int n =4;
     
//      // half upper portion

//      for (int i = 1; i <= n; i++)
//      {
//          // for left side star
//          for (int j = 1; j <= i; j++)
//          {
//             cout<<"*";
//          }
//          //for space
//          for (int j = 1; j <= 2*(n-i); j++)
//          {
//             cout<<" ";
//          }
//          // for right side star
//          for (int j = 1; j <= i ; j++)
//          {
//             cout<<"*";
//          }
         
//          cout<<endl;
         
          
//      }
     
//     // half lower portion

//     for (int i = n; i >= 1; i--)
//     {
//       // left side star

//        for (int j = 1; j <= i; j++)
//        {
//           cout<<"*";
//        }
   
    
//      // for space

//      for (int j = 1; j <= 2*(n-i); j++)
//      {
//          cout<<" ";
//      }

//      for (int j = 1; j <=i; j++)
//      {
//         cout<<"*";
//      }
     
     

//         cout<<endl;
//     }


//   return 0;
// }


#include<iostream>

using namespace std;

/*
   day = 2             
           1
           0 1
           1 0 1
           0 1 0 1
           0 1 0 1 0

*/

int main(){
     int n = 5;
     bool val = true;
     for (int i = 0; i < n; i++)
     {
      // this for loop is for row
      for (int j = 0; j <= i ; j++)
      {
        // this for loop is for col
        cout<<val;  // print the value of val
        val = !val; 
      }
      
     }
          

  return 0;
}






















/* 
   Q.12 
                  1
               2  1  2
            3  2  1  2  3
         4  3  2  1  2  3  4
      5  4  3  2  1  2  3  4  5
*/


// int main(){

//        int n = 5;

//        for (int i = 1; i <= n; i++)
//        {
//           // for space
//           for (int j = 1; j <= n-i; j++)
//           {
//               cout<<" ";
//           }
//           //for num backward
         
//          for (int j = i; j >= 1; j--)
//          {
//                cout<<j;
//          }
//          // for num forward

//          for (int j = 2; j <= i; j++)
//          {
//              cout<<j;
//          }
         
//            cout<<endl;

//        }

//   return 0;
// }