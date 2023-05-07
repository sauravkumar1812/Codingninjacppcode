#include <iostream>

using namespace std;
#include <bits/stdc++.h>
bool isPalRec(char input[],int s, int e){
    if (s == e)
    return true;
 
  
    if (input[s] != input[e])
    return false;
 
  
    if (s < e + 1)
    return isPalRec(input, s + 1, e - 1);
 
    return true;
}
bool checkPalindrome(char input[]) {
    // Write your code here
int n=strlen(input);
if(n==0||n==1){
    return true;
}
 return isPalRec(input, 0, n - 1);

}



int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
