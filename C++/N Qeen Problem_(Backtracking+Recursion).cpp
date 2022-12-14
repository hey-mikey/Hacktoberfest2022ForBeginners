/************************************************************************************************
We have to place n queens on a nXn chess board such that they don't intersect each other.
We use RECURSION + BACKTRACKING to write the code for above problem
          We check at 3 positions: 
          1. if no queen is placed in same column of the rows of that [i][j] position(no need to check in next column and previous column (since we checked there))
          2. checking in diagonal before that row(row--, col--)
          3. checking in diagonal before that row(row--, col++)
***********************************************************************************************/

#include <bits/stdc++.h>
using namespace std;
bool isSafe(int** arr, int x, int y, int n)
{
    for(int row = 0; row < x ; row++){
        if(arr[row][y] == 1)
        return false;
    }
    int row = x, col = y;
    while(row >= 0 && col >= 0)
    {
        if(arr[row][col] == 1)
        {
            return false;
        }
        row-- ;
        col--;
    }
     row = x;
     col = y;
    while(row >= 0 && col < n)
    {
        if(arr[row][col] == 1)
        {
            return false;
        }
        row-- ;
        col++;
    }
    return true;
}
bool nQueen(int** arr, int x, int n)
{
    if(x>=n)
    return true;
    for(int col = 0; col < n; col++)
    {
        if(isSafe(arr, x, col ,n))
        {
            arr[x][col] = 1;
            if(nQueen(arr, x+1, n))
            {
                return true;
            }
            arr[x][col] = 0;
        }
    }
    return false;
}
int main()
{
   int n;
   cin >> n;
   int** arr = new int* [n];
   for(int i = 0; i < n; i++)
   {
       arr[i] = new int[n];
       for(int j = 0; j < n; j++)
       {
          arr[i][j] = 0;
       }
   }
   if(nQueen(arr, 0, n))
   {
      for(int i = 0; i < n; i++)
   {
       for(int j = 0; j < n; j++)
       {
          cout << arr[i][j] << " ";
       }
       cout << endl;
   } 
   }
   return 0;
}
