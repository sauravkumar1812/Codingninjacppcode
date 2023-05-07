#include <iostream>
#include <cstring>
using namespace std;

#include<bits/stdc++.h>
#define ASCII_SIZE 256
char highestOccurringChar(char input[]) {
    // Write your code here
   int count[ASCII_SIZE]={0} ;
    int n=strlen(input);
  char result;
    for(int i=0 ;i<n;i++){
        count[input[i]]++;
    }
    
    int largest = count[0];
    int largestIndex = 0;
    for(int i = 1; i < 256; i++) {
        if(count[i] > largest) {
            largest = count[i];
            largestIndex = i;
        }
    }
    result = largestIndex;
  
    return result;
}




int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}