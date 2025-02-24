#include<iostream>
#include<bits/stdc++.h>
using namespace std;



void getDetails(string str){
     string sym = str.substr(0,4);
     string expiry_data = str.substr(4,9);
     cout<<sym<<endl;  
     cout<<expiry_data<<endl; 
     string data = str.substr(8,3);
     cout<<data<<endl; 
}





int main(){

     //char

     // char ch = 'a';
     // char ch1 = 'F';  // we cant use double cootestions means is " "
     
     //  int pos = ch1-'A';
     //  cout<<pos<<endl;

     // cout<<(int)ch<<endl;

     // char array

     // char arr[] = {'a','b','D','#','.','\0'};

     // cout<<arr<<endl;

     // char word[5] ="code";  // size should be more than the number of char because of the null intializations that is auto

     //  char words[50] = {'c','o','d','e','\0'};

     //   cout<<words<<endl;
     //   cout<<word<<endl;
       
     //   cout<<strlen(words)<<endl;    // can't count the null value


     // input stringss

     // char word[10];

//      cin>>word;    // its take a complete string as a input without the space
 
//      //  for (int i = 0; i < 5; i++)
//      //  {
//      //       cin>>word[i];
//      //  }
      

//     cout<<word;

     //    char ch = 'e';
     //     char ch1 =  ch- 'a' + 'A';
     //       cout<<ch1<<endl;

     //    char str1[] = "sunil";
     //    char str2[] = "xyzzzz";
   
     //      cout<<strcmp(str1,str2)<<endl;


     //     string str;
       
     //      getline(cin,str);
     
     //       cout<<str;
  

       string str [] = {"NIFT20MAY20242023CO.IN","NIFT24MAY20242023CO.INjh","NIFT14MAY20242023CO.IN"};

         int n = sizeof(str)/sizeof(str[0]);
         cout<<n<<endl;      
       
          for (int i = 0; i < n; i++)
          {
               getDetails(str[i]);    
          }

          char ch[] = "sunildhayaljksn";

             string obj = "fhaylsunil";
          cout<<obj.find("sunil");

           


     return 0;
}


