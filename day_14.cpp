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

// int main(){


// /*
//      input
// */
//       string str;
      
//       getline(cin,str);

//       cout<<str;

//       /* output for every charcter sepreatly*/

//      //  for (int i = 0; i < str.length(); i++)
//      //  {
//      //        cout<<str[i]<<"-";
//      //  }

//      /* another way of output */

//      for (char ch:str)
//      {
//           cout<<ch<<" ";
//      }

//      cout<<endl;
     
//      return 0;
// }


/*
     string member function

*/

// int main(){
        
//         string str = "iamsunildhayal";
//            cout<<str.length();
//           cout<<str.size(); //    
//         cout<<str.at(5)<<endl;
//         cout<<str.find("dh")<<endl;  /* it return -1 if am not persent in str like int idx = str.find("am")*/
//         cout<<str.substr(2,5);



//      return 0;
// }


/*
    anagram
*/

// bool isanagram(string str1 , string str2){
          
//           int count[26];

//           if (str1.length() !=  str2.length())
//           {
//                  cout<<"not an anagram"<<endl;
//                  return false;
//           }
          

//           for (int i = 0; i < str1.length(); i++)
//           {
//                  int idx = str1[i] - 'a';
                  
//                   count[idx]++;

//           }

//           for (int i = 0; i < str2.length(); i++)
//           {
                
//                  int idx = str2[i] - 'a';

//                  if (str2[idx] == 0)
//                  {
//                     cout<<"not a valid anagram"<<endl;
//                       return false;
//                  }

//                  count[idx]--;
                 
//           }
          
//            return true;

// }


// int main(){
      
//       string str1 = "anagram";
//       string str2 = "ngaram";

//        if(isanagram(str1,str2)){
//           cout<<"anagram"<<endl;
//        }else
//        {
//           cout<<"not an anagram"<<endl;
//        }
       

//      return 0;
// }


/*
       Question 1 : Count how many times lowercase vowels occurred in a String entered 
                    by the user.
*/

// int getVowels(string str){
      
//           int count = 0;

//           for (int i = 0; i < str.length(); i++)
//           {
//              if (str[i] == 'a' || str[i] == 'e' ||
//                str[i] = 'i' || str[i] == 'o'||
//                str[i] == 'u')
//                {
//                     count++;
//                }
               
//           }
       
//       //  cout<<count<<endl;

//           return count;
          
// }


// int main(){

//         string str = "SunilDHAyal";

//        getVowels(str);
        

//    return 0;
// }

/*
         Question 2 : You are given two strings s1 and s2 of equal length. A string swap is an 
                  operation where you choose two indices in a string (not necessarily different) and 
                  swap the characters at these indices.
                  Return true if it is possible to make both strings equal by performing at most one 
                 string swap on exactly one of the strings. Otherwise, return false.
                   Example :
                       Input: s1 = "bank", s2 = "kanb" Output: 
                           true
                         Explanation: For example, swap the first character with the last character of s2 to 
                              make "ban
*/

// void isEqual(string str1, string str2){
         
//            int st = 0;
//            int end = str2.length()-1;

//            char temp = str2[st];
                   
//              str2[st] = str2[end];
//              str2[end] = temp;

//              if (str1 ==  str2)
//              {
//                cout<<"equal";
//              }
             
// }


// int main(){

//       string str1 = "bank";

//       string str2 = "lanb";

//       isEqual(str1,str2);

//    return 0;
// }