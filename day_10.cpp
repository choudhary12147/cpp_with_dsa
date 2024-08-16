#include<iostream>

using namespace std;

/* largest value in a given array */

// int main(){

//      int n;
//       cin>>n;
//         int arr[n];
           
//            for (int i = 0; i < n; i++)
//            {
//                cin>>arr[i];
//            }
           
//     //   int max = 0;

//       // or
//       int max = arr[0];

//       for (int i = 0; i < n; i++)
//       {
//         if (arr[i] > max )
//         {
//              max = arr[i];
//         }
        
//       }
      
//        cout<<max<<endl;
  
//     return 0;
// }



// arrays are passed by reference


// when we pass the array to the func then there is no copy of number 
  //into new fn variable its just pass the reference means address of arr 


// void func(int arr[]){

//          arr[0] =100;

// }

// void func2(int *ptr){

//       ptr[1] = 200;
// }



// int main(){
   

//      int a = 5;
//      int *ptr = &a;

//      cout<<ptr<<endl;

//      int arr[] = {1,2,3,4};

//      cout<<arr<<endl;
//      cout<<*arr<<endl;
//      cout<<*(arr+1)<<endl;
      
//       cout<<"value before pass the reference"<<arr[0]<<endl;

//      func(arr);
  
//     cout<<"value after pass the reference"<<arr[0]<<endl;

//     func2(arr);
//     cout<<"value after the reference "<<arr[1]<<endl;

//     return 0;
// }




// liner search



// int main(){

// int n ;

// int arr[n];

// int key ;

// cout<<"enter the number of element in array"<<endl;

// cin>>n;

// cout<<"enter the array"<<endl;

// for (int i = 0; i < n; i++)
// {
//      cin>>arr[i];
// }

// cout<<"enter the key which we want to search"<<endl;
// cin>>key;

// int idx;

// for (int i = 0; i < n; i++)
// {
//     if (arr[i] == key)
//     {
//          idx = i;
//        break;
//     }
    
// }

// cout<<"the element is on the "<<idx<<" index"<<endl;

//   return 0;
// }




// use function


// int linearsearch(int arr[],int key , int n){
          
//           for (int i = 0; i < n; i++)
//           {
//               if (arr[i] == key)
//               {
//                  return i;
//               }
              
//           }
          

// }
// int main(){
     
     
//     int arr[] = {2,3,4,5,6};
//     int n = sizeof(arr);
//       int  key = 5;
      
//      cout<< linearsearch(arr,key ,n) +1<<endl;;

//   return 0;
// }



/*  reverse a array with extra space */


void printarr(int *arr , int n ){

     for (int i = 0; i < n; i++)
     {
         cout<<arr[i]<<" ";
     }
     
   
}



 int main(){
     
     int arr[] = {2,3,4,5,6};
     
     int n =sizeof(arr);

     int copy_arr[n];

     for (int i = 0; i < n; i++)
     {
        int j = n-i-1;
        copy_arr[i] = arr[j];
     }
     
     for (int i = 0; i < n; i++)
     {
        arr[i] = copy_arr[i];
     }

     printarr(arr , n); 


  return 0;
 }
         
         



