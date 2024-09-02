#include<iostream>

using namespace std;

// int main(){

//   // dynamic memory alloction

//     int size;

//     cin>>size;

//     int  *arr  = new int[size];

//       int x = 1;

//       for (int i = 0; i < size; i++)
//       {
//           arr[i] = x;
//           cout<<arr[i]<<" ";
//           x++;
//       }
//        cout<<endl;

//     return 0;
// }



/*  dynamic array alloction using another funtion rather than the main */



// void func(){

//       int size;
      
//       cin>>size;
           
//            int *ptr = new int[size];

//            int x = 1;

//            for(int i = 0; i < size; i++)
//            {
//                ptr[i] = x;
//                cout<<ptr[i];
//                x++;
//            }
           
//            // after the memory array is allocted in heap and not free by completed of func 
//            // that's we should to delete it 

//            delete [] ptr;

//            // in dynamic programming we have to delete it 

// }


// int main(){
//         func();
//   return 0;
// }




/* 
    Q differnce between static vs dynamic memory alloction ?

      static memory alloction                                       dynamic memory alloction
 1. alloction at compile time                                   alloction at runtime.
 2. uses stack memory                                           uses heap memory.
 3. get freed automatically                                     needs to be freed explicity

*/


/*

   Q.  memory leaking :- A memory leak occurs when programmer create a memory in a heap and forget to delete it.
    leads to reduced performance due to depletion of available memory. 

*/

  

  /*
         2D dynamic array
  */

int main(){

     int row, col;

     cout<<"enter rows: ";
     cin>>row>>col;

     int **matrix = new int*[row];

     for (int i = 0; i < row; i++)
     {
             matrix[i] = new int[col];
     }
      
       // store the value in the array
         
         int x = 1;

       for (int i = 0; i <row ; i++)
       {
            for (int j = 0; j < col; j++)
            {
                matrix[i][j] = x++;

                cout<<matrix[i][j]<<" ";
            }
            
            cout<<endl;
       }
       

    return 0;
}


