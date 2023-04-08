#include<iostream>
using namespace std;

void print(int n){
    //write your code here
   int i=1;
   int ans;

 while(i<=n){
     ans=1*i;
     cout<<ans<<" ";
     i++;
 }

}

int main(){
    int n;
    cin >> n;
  
    print(n);
}
