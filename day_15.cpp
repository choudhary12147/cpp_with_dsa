#include<iostream>
#include<vector>
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
//            // that'swhy  we should to delete it 

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



// int main(){

//      int row, col;

//      cout<<"enter rows: ";
//      cin>>row>>col;

//      int **matrix = new int*[row];

//      for (int i = 0; i < row; i++)
//      {
//              matrix[i] = new int[col];
//      }
      
//        // store the value in the array
         
//          int x = 1;

//        for (int i = 0; i <row ; i++)
//        {
//             for (int j = 0; j < col; j++)
//             {
//                 matrix[i][j] = x++;

//                 cout<<matrix[i][j]<<" ";
//             }
            
//             cout<<endl;
//        }
       

//     return 0;
// }



/*
     standard template library of c++

     it is collection of container classes , alogorithms & iterations.
     it contain implementation of comman datastructure like vectors, stacks,maps etc.
*/


/*
  vectors like dynamic array they can resize dynamically at runtime . They are stored  contiguously in memory.
    vectors are also called sequence container.
*/

// intialization of vectors




// int main(){
     
//         vector<int> vec1 ;

//         vec1 = {1,2,3,4};

//         cout<<vec1.size()<<"\n";

//         for (int i = 0; i < vec1.size(); i++)
//         {
//               cout<<vec1[i]<<" ";
//         }
        
//       // like constrator vector is initailize by -1 value and there is size of 5 

//         vector<int> vec2 (5,-1);
         

//   return 0;
// }


/*
   size and capacity of vector
*/

// int main(){
         
//          vector <int> vec;
           
//            // size and capacity of vector before push a element 

//            cout<<"size of vec is : "<<vec.size()<<"capacity of vec is : "<<vec.capacity()<<endl;
           

//           vec.push_back(5);

//           cout<<"size of vec is : "<<vec.size()<<"capacity of vec is : "<<vec.capacity()<<endl;


//      return 0;
// }


/*
    Q. find if any pair in sorted vector has target sum = 9.
       input : arr[] = {2,7,11,15};
       output: [0,1]    
*/


// vector<int> pairsum(vector<int> arr, int target){
         
//           int st = 0, end = arr.size()-1;
            
//             int currsum = 0;

//             vector<int> ans;

//             while (st<end)
//             {
//                 currsum = arr[st]+arr[end];

//                 if (currsum == target)
//                 {
//                     ans.push_back(st);
//                     ans.push_back(end);
//                     return ans;

//                 }else if (currsum < target)
//                 {
//                      st++;
//                 }else
//                 {
//                   end--;
//                 }
                                                                
//             }            
          
//           return ans;

// }

// int main(){

//        vector<int> vec1 = {2,7,11,15};

//       int target = 9;

//       vector<int> ans = pairsum(vec1,target);

//        for (int i = 0; i < ans.size(); i++)
//        {
//           cout<<ans[i]<<" ";
//        }
       
//   return 0;
// }




/*
  2D vector 
*/       
 




// int main(){

//       vector <vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};
      
//       for (int i = 0; i < v.size(); i++)
//       {
//          for (int j = 0; j < v[i].size(); j++)
//          {
//               cout<<v[i][j];
//          }

//          cout<<endl;
         
//       }
      
//   return 0;
// }

//  int main(){
     
//      vector <int> v;

//      for (int i = 0; i < 5; i++)
//      {
//         v.push_back(i);
//      }
     

//       cout<<v.size()<<" "<<v.capacity();

//      return 0;
//  }


/*
       Question 1 : You have a set of integers, which originally contains all the numbers
                   from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated
                   to another number in the set, which results in repetition of one number and loss of
                   another number.
                   You are given an integer array nums representing the data status of this set after the 
                  error.
                   Find the number that occurs twice and the number that is missing and return them in
                   the form of an array. 
                   Example :
                   Input: nums = [1,2,2,4]
                   Output: [2,3]
*/


vector<int> findErrorsum( vector<int> &nums ){

      int n = nums.size();

      vector<int> ans ;

        vector<bool> ispresent(n+1,false);

          // this for loop calculate the duplicate element

        for (int i = 0; i < n; i++)
        {
               if (ispresent[nums[i]])
               {
                  ans.push_back(nums[i]);
               }else{
                   ispresent[nums[i]] = true;
               }

               
        }

        //  this for loop calculate the miss element

        for (int i = 1; i < n+1; i++)
        {
            if (!ispresent[nums[i]])
            {
                 ans.push_back(nums[i]);
                 break;
            }
            
        }
        
        return ans;
            
}


int main(){

             vector<int> nums = {1,2,2,4};
             vector<int> result = findErrorsum(nums);

             for (int i = 0; i < result.size(); i++)
             {
                 cout<<result[i]<<" ";
             }
             
  
  return 0;
}





