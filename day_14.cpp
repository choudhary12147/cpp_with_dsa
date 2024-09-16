#include<iostream>
#include<string.h>
using namespace std;


/*  char  array */

// int main(){

//     // char arr[] = {'a' , 'b' , 'c' ,'d','e' '\0'};

//     //   int n = sizeof(arr)/sizeof(arr[0]);

//     // for (int i = 0; i < n; i++)
//     // {
//     //      cout<<arr[i]<<" ";
//     // }

//     // cout<<arr;

//     /*
//         string literals in char arr
//     */
    

//        char name[] = "sunil";

//        int m = sizeof(name)/sizeof(name[0]);

//        int n = strlen(name);
//        cout<<n<<endl;
//        cout<<m<<endl;

//        cout<<name<<endl;

//        cout<<name[3]<<endl;

//       /*
//          input char array
//       */


//       //  char word[30];

//       //  cin>>word;   // ignore the words after the white space

//       //  cout<<word<<endl;

//        char sentence[30];

//        cin.getline(sentence,30);
//        cout<<sentence<<endl;


//     return 0;
// }


/*
     convert to uppercase
*/


// void toupper(char word[] , int n){
         
//          for (int i = 0; i < n; i++)

//           //   char ch = word[i];

//          {
//              if (word[i] >= 'A' && word[i] <= 'Z')
//              {
//                   continue;
//              }else
//              {
//                 word[i] = word[i] - 'a' +'A';

//              }
             
             
//          }
         
// }

// int main(){

//      char word[] = "ApPle";

//      toupper(word,strlen(word));

//       cout<<word<<endl;

//     return 0;
// }


/*
      reverse char array
*/

// void reverse(char word[] , int n){

//      int st = 0;
//      int end = n-1;


//      while (st<=end)
//      {
//             int temp = word[st];

//             word[st] = word[end];
//             word[end] = temp;
                
//                 st++;
//                 end--;

//      }
     
// }


// int main(){
   
//    char word[] = "code";

//    reverse(word,strlen(word));

//      cout<<word<<endl;

//      return 0;
// }


/*
     palindrom
*/


//  bool isPalindrom(char word[] , int n){

          
//               int st = 0;
//             int end = n-1;

//             while (st<=end)
//             {
//                  if (word[st] != word[end])
//                  {
//                       cout<<"not a palindrom"<<endl;
                    

//                          return false;
//                  }
                    
//             }
//             cout<<"palindrom";
//             return true;
                     
//  }



// int main(){
       
//        char word[] = "desi";

//     isPalindrom(word,strlen(word));

//      return 0;
// }

/*
   cstring function
*/

// int main(){

//       /*
//         strcpy
//       */
         
//          char name[11];

//          strcpy(name,"sunil");
         
//          /* concatenation  */

//           strcat(name,"dhayal");

//           /*  str comparison */

//            int n =  strcmp(name,"sunildhayal");

//           //  cout<<n<<endl;
//            cout<<name[10];

//            cout<<name; 


//      return 0;
// }

/*
   string input nd output 
*/

int main(){


/*
     input
*/
      string str;
      
      getline(cin,str);

      cout<<str;

      /* output for every charcter sepreatly*/

      for (int i = 0; i < str.length(); i++)
      {
            cout<<str[i]<<"-";
      }
      

     return 0;
}