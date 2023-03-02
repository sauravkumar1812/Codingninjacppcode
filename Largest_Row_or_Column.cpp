
#include <iostream>
using namespace std;

/*
You can use minimum value of integer as -2147483647 and 
maximum value of integer as 2147483647
*/
#include<bits/stdc++.h>
void findLargest(int **input, int nRows, int mCols)
{
    //Write your code here
   
// For printing sum of row
	int max=INT_MIN;
  int ans ='r';
  int index=0;

  for (int j = 0; j < nRows; j++) {
     int  sum = 0;
      
       for (int i = 0; i < mCols; i++) {

         sum = sum + input[j][i];
        
       }

       if (sum > max) {
         max = sum;
         index = j;
         ans = 'r';
       }
  }
  // printing sum of column
for(int  j=0 ;j<mCols;j++){
    int sum=0;
     
     for (int i = 0; i < nRows; i++) {

       sum = sum + input[i][j];
      
     }
     if (sum > max) {
       max = sum;
       index = j;
       ans = 'c';
     }
}

if (ans =='r')
  cout << "row"
       << " " << index << " " << max;

else if (ans == 'c')
  cout << "column"
       << " " << index << " " << max;
  
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}
}