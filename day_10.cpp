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


// void printarr(int *arr , int n ){

//      for (int i = 0; i < n; i++)
//      {
//          cout<<arr[i]<<" ";
//      }
     
   
// }



//  int main(){
     
//      int arr[] = {2,3,4,5,6};
     
//      int n =sizeof(arr);

//      int copy_arr[n];

//      for (int i = 0; i < n; i++)
//      {
//         int j = n-i-1;
//         copy_arr[i] = arr[j];
//      }
     
//      for (int i = 0; i < n; i++)
//      {
//         arr[i] = copy_arr[i];
//      }

//      printarr(arr , n); 


//   return 0;
//  }




/* reverse an array without extra space */         
         



// int main(){
   
//     int arr[] = {2,3,4,5,6};

//     int n = sizeof(arr)/sizeof(arr[0]);

//     int start = 0;
//     int end = n-1;

//     while (start < end)
//     {
//          int temp = arr[start];

//          arr[start] = arr[end];

//          arr[end] = temp;

//          start++;
//          end--;
//     }
      
//    for (int i = 0; i < n; i++)
//    {
//          cout<<arr[i]<<" ";
//    }
    
//    return 0;
// }




/*  binary search  */


// int main(){
     
//      int arr[] = {2,5,6,8,9};

//      // for binary search array should be sorted

//      int n = sizeof(arr)/sizeof(arr[0]);

//      int st = 0 , end = 0;
       
//        int key = 8;

//        int idx;

//      while (st <= end)
//      {
//            int mid =  (st+end)/2;
           
//            if (key == arr[mid] )
//            {
//               idx =  mid;
//               break;
//            }else if ( arr[mid] < key)
//            {
//               st = mid + 1;
//            }else
//            {
//             end = mid-1;
//            }

//      }
      
//        cout<<idx<<endl;

//    return 0;
// }




// using function


int binarysearch (int *arr , int n , int key ){

       int st = 0;
       int end = n-1;

      

       while (st <= end)
       {
                int mid = (st+end)/2;

            if (arr[mid] == key)
            {
                return mid;
            }
            else if (arr[mid] > key  )
            {
                 end = mid-1;
            }
            else
            {
                 st = mid+1;
            }
            
       }
       

     return -1;
}


int main(){
    
    int arr[] = {4,5,6,7,8};

    int n = sizeof(arr)/sizeof(int);

      int key = 7;

   int idx = binarysearch( arr , n , key);
      
      cout<<idx;
     return 0 ;
}



/* pointer arithmetic */

int main(){
   
     int arr[] = {2,3,4,5,6};

     int *ptr = arr;

     cout<<*ptr<<endl;
     
     int *ptr1 = arr + 3;

     cout<<*ptr1<<endl;
   
   //  addition and subtraction

    int sub = ptr1 - ptr ;

    cout<<sub<<endl;
// addition have no meaning 

  // comparison of pointer
 
    cout<<(ptr1>ptr)<<endl;

     return 0;
}