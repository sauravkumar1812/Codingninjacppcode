#include <iostream>
#include "solution.h"
using namespace std;
int staircase(int n){
    /* Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Return output and don't print it.
     *  Taking input and printing output is handled automatically.
     */
    
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    int sum=0;
    sum+=staircase( n-1);
     sum+=staircase( n-2);
      sum+=staircase( n-3);

      return sum;
    
}
int main() {
    int n, output;
    cin >> n;
    output=staircase(n);
    cout<< output <<endl;
}
