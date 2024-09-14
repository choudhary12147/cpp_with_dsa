#include<iostream>

using namespace std;


/*  char  array */

int main(){

    char arr[] = {'a' , 'b' , 'c' ,'d','e','\0'};

      int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
         cout<<arr[i]<<" ";
    }

    cout<<arr;
    


    return 0;
}