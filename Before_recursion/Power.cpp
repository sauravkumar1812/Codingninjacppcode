#include<iostream>

using namespace std;
int power(int x, int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */

if(n==0){
  return 1; 
}
if(x==0){
 return 0;
}
  return x * power(x,n-1);
}

int main(){
    int x, n;
    cin >> x >> n;
  
    cout << power(x, n) << endl;
}
