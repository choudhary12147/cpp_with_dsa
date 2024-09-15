#include<iostream>
#include<string.h>
using namespace std;


/*  char  array */

int main(){

    // char arr[] = {'a' , 'b' , 'c' ,'d','e' '\0'};

    //   int n = sizeof(arr)/sizeof(arr[0]);

    // for (int i = 0; i < n; i++)
    // {
    //      cout<<arr[i]<<" ";
    // }

    // cout<<arr;

    /*
        string literals in char arr
    */
    

       char name[] = "sunil";

       int m = sizeof(name)/sizeof(name[0]);

       int n = strlen(name);
       cout<<n<<endl;
       cout<<m<<endl;

       cout<<name<<endl;

       cout<<name[3]<<endl;

      /*
         input char array
      */


      //  char word[30];

      //  cin>>word;   // ignore the words after the white space

      //  cout<<word<<endl;

       char sentence[30];

       cin.getline(sentence,30);
       cout<<sentence<<endl;


    return 0;
}