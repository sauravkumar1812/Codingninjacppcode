#include <iostream>

using namespace std;
#include<bits/stdc++.h>
int stringToNumber(char input[]) {
    // Write your code here
    int n=strlen(input);
 	if(n==1){
        return input[0]-'0';
    }
    int ans=stringToNumber(input+1);
    int b=input[0]-'0';

    return (b*pow(10,n-1))+ans;
}



int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
