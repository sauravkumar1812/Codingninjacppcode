#include <iostream>
#include <cstring>
using namespace std;
#include <bits/stdc++.h>
bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    string temp(input1);
    string newtemp(input2);

    int a=temp.length();
    int b=newtemp.length();
    if (a != b) {
      return false;
    }
    sort( temp.begin() , temp.end() );
    sort( newtemp.begin() , newtemp.end() );

    for (int i = 0; i < a;  i++)
      if (temp[i] != newtemp[i]) 
        return false;
      
     
        return true;
      
    
}


int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}