#include<iostream>

using namespace std;

// tiling problem


int tillingprob(int n){

    if (n == 0 || n == 1)
    {
          return 1;
    }

    return tillingprob(n-1) + tillingprob(n-2);

}

int main(){

    cout<<tillingprob(5);

    return 0;
}