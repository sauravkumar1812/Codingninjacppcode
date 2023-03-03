#include <iostream>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols)
{
    //Write your code here
   int i, k=0,l=0;
   while(k<nRows && l< nCols){
    // for first row
         for(i =l;i<nCols;++i){
           cout<<input[k][i]<<" ";
         }
         k++;
         //for last column
         for(i=k;i<nRows;++i){
           cout<<input[i][nCols-1]<<" ";
         }
         nCols--;
         if(k<nRows){
           for (i = nCols - 1; i >= l; --i) {
             cout << input[nRows - 1][i] << " ";
           }
           nRows--;
         }
         if(l<nCols){
          for(i=nRows-1;i>=k;--i){
            cout<<input[i][l]<<" ";
          }
          l++;
         }
   }
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}