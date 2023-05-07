#include <iostream>
#include "solution.h"
using namespace std;
int staircase(int n){
   
    
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
