#include<iostream>
#include<string>

using namespace std;

// tiling problem


// int tillingprob(int n){

//     if (n == 0 || n == 1)
//     {
//           return 1;
//     }

//     return tillingprob(n-1) + tillingprob(n-2);

// }



//  remove duplicates in string

void romove( string str , int i , int map [] , string ans){


    char ch = str[i];

    int mapidx = (int)(ch - 'a');


         if (map[mapidx] != true)
         {
               ans+=ch;

               map[mapidx] = true;
         }
         
         
         

       remove( str , i+1);
       
}





int main(){

    // cout<<tillingprob(5);

   int map [26] = {false};

  string str = "shikhachahar";

   string ans = "";
 
   remove(str , 0 , map , ans);

   cout<<ans<<endl;

    return 0;
}