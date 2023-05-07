#include <iostream>
#include <cstring>
using namespace std;

#include<bits/stdc++.h>
void reverseEachWord(char input[]) {
 
int temp;
string str(input);
int start = 0,end = 0;
for(int i=0;i<=strlen(input);i++){
  // for(int j=1;input[j] != '\0';j++){
    if(input[i] == ' ' || input[i] == '\0'){
      end = i-1;
    while(start<end){
    char temp = input[start];
    input[start] = input[end];
    input[end] = temp;
    start++;
    end--;
  }
  start = i+1;
}
}


}


int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}