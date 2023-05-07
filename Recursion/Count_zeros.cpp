#include <iostream>

using namespace std;

int countZeros(int n) {
    // Write your code here
    int count=0;
if(n==0){
    return 1;
}
if(n<10){
    return 0;
}
   else if((n%10)==0){
       count++;
       
   }
    n=n/10;
    int cont=countZeros( n)+count;

   return cont;
}



int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}
