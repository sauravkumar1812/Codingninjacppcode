#include <iostream>
#include <cstring>
using namespace std;

#include<cstring>
void printSubstrings(char input[]) {
    // Write your code here
    // int len=strlen(input);
    string temp(input);
   

    for (int i=0; i <strlen(input); i++) {

      for (int j = 1; j <=strlen(input)-i; j++) {
        cout <<temp.substr(i,j)<<endl ;
      }
         
    }

    
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}