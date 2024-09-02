#include<iostream>

using namespace std;

/*  
   spiral matrix 

*/

void spiralmatrix(int mat[][4], int n , int m ){
    
                 int scol = 0 , srow = 0;

                  int endcol = m-1, endrow = n -1;



              
              while (srow <= endrow && scol<= endcol)
              {
                
                  

                  //top 

                  for (int j = scol; j <= endcol; j++)
                  {
                      cout<<mat[srow][j]<<" ";
                  }

                  //right 

                  for (int i = srow; i <= endrow; i++)
                  {
                      cout<<mat[i][endcol]<<" ";
                  }
                  
                  // bottom


                  for (int j = endcol-1; j >= scol; j--)
                  {
                      cout<<mat[endrow][j]<<" ";
                  }
                  
                // left

                for (int i = endrow -1 ; i >= srow + 1; i--)
                {
                   cout<<mat[i][scol]<<" ";
                }
                
                 srow++;scol++;
                 endrow--;endcol--;



              }
              
           cout<<endl;


}


int main(){
      
      int matrix[4][4] = {{1,2,3,4,}, {5,6,7,8},{9,10,11,12},{13,14,15,16}};

        spiralmatrix(matrix,4,4);

    return 0;
}