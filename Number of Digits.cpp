#include<iostream>

using namespace std;

int count(int n){
    //write your code here
    // int sum=0;
    if (n == 0) {
      return 0;
    }
    
      int smallout=1+count(n/10);

  
  return smallout;
}

int main(){
    int n;
    cin >> n;
  
    cout << count(n) << endl;
}


