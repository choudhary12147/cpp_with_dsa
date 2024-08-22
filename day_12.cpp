#include<iostream>
#include<algorithm>

using namespace std;


/* bubble sort  */


// void bubblesort(int arr[] , int n){
          
//           for (int i = 0; i < n-1 ; i++)
//           {
//                 for (int j = 0; j < n-i-1; j++)
//                 {
//                       if (arr[j] > arr[j+1])
//                       {
//                           int temp = arr[j];
//                         arr[j] = arr[j+1];
//                         arr[j+1] = temp;

//                       }
                      
                      
//                 }
                
//           }
          
// }



// int main(){

//        int arr [] =  {5,4,1,3,2};

//        int n = sizeof(arr)/sizeof(arr[0]);

//        bubblesort(arr , n);

//        for (int i = 0; i < n; i++)
//        {
//           cout<<arr[i]<<endl;
//        }
       


//     return 0;
// }





/*   selection sort  swap by compare from intial element    */




// void swap(int &a , int &b ){
     
//        int temp = a;
//        a = b;
//        b = temp;
      
// }


// void selectionsort(int arr[] , int n ){

//       for (int i = 0; i < n-1 ; i++)
//       {
//          int min_idx = i;

//          for (int j = 1+i ; j <n; j++)
//          {
//                if (arr[j] < arr[min_idx])
//                {
//                     min_idx = j;
                    
//                }

//          }

//          swap(arr[i] , arr[min_idx]);
         
//       }
      
// }


// int main(){
   
//    int arr[] ={4,1,5,2,3};
//    int n = sizeof(arr)/sizeof(arr[0]);

//     selectionsort(arr,n);

//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i];
//     }
    

//     return 0;
// }



/*
 insertion sort   
 
*/



// void insertionsort(int arr[] , int n){

//    for (int i = 1; i < n; i++)
//    {
//            // this loop for unsorted part
          
//           int curr = arr[i];
//           int prev = i-1;

//           while (prev >=  0 && arr[prev] > curr)
//           {
//              swap(arr[prev] , arr[prev+1]);
//               prev--;
//           }

//             arr[prev+1] = curr;        

//    }
   
// }


// int main(){
   
//    int arr[] = {1,4,5,2,3};

//    int n = sizeof(arr)/sizeof(arr[0]);

//    insertionsort(arr, n);

//    for (int i = 0; i < n; i++)
//    {
//       cout<<arr[i];
//    }
   

//     return 0;
// }





/* counting sort  */


void countsort(int arr[] , int n){

    int freq[1000];


    // find the rage 

    int minval = INT16_MIN , maxval = INT16_MAX ;

    for (int i = 0; i < n; i++)
    {
          minval  = min(minval,arr[i]);
          maxval = max(maxval,arr[i]);
    }

    // frequency

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;

    }

    // write frequency value in array


    for (int i = minval , j = 0; i <= maxval; i++)
    {
         while (freq[i] > 0)
         {
              arr[j++] =  i;

              freq[i]--;
         }
         
    }
    
    
    
     
}




int main(){

     int arr [] = {1,1,2,2,3,4,5,5,6,7,7};

     int n = sizeof(arr)/sizeof(arr[0]);

     countsort(arr , n);

     for (int i = 0; i < n; i++)
     {
        cout<<arr[i];
     }
     
        
    return 0;
}