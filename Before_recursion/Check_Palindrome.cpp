<<<<<<< HEAD
//palindrome
#include<bits/stdtr1c++.h>
using namespace std;
bool checkPalindrome(char str[]) {
    // Write your code here
    int count=0;
    for(int i=0; str[i] !='\0'; i++){
        count++;
    }
    int j=count-1;
    for(int i=0;i<count/2;i++){
          if(str[i]!=str[j]){
             return false;
          }
       j--;
      }
    return true;
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
=======
//palindrome
#include<bits/stdtr1c++.h>
using namespace std;
bool checkPalindrome(char str[]) {
    // Write your code here
    int count=0;
    for(int i=0; str[i] !='\0'; i++){
        count++;
    }
    int j=count-1;
    for(int i=0;i<count/2;i++){
          if(str[i]!=str[j]){
             return false;
          }
       j--;
      }
    return true;
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
>>>>>>> f51d6227401afe028480357176a380dc923aa58f
}