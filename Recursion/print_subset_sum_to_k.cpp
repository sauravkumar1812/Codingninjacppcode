#include <iostream>
using namespace std;
#include "solution.h"
#include<bits/stdc++.h>
void help(int input[],int size,int k,vector<int>ans){
if(size==0){

    if(k==0){
        for(int i:ans){
            cout<<i<<" ";}
            cout<<endl;
        
       
    }
     return;
}
//not include
help(input+1,size-1,k,ans);
ans.push_back(input[0]);
//include case
help(input+1,size-1,k-input[0],ans);
return;
}

void printSubsetSumToK(int input[], int size, int k) {
    // Write your code here
    vector<int>ans;
    help(input,size,k,ans);
}

int main() {
  int input[1000],length,k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  cin>>k;
  printSubsetSumToK(input, length,k);
}
