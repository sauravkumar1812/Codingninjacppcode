#include <iostream>

using namespace std;
// Change in the given string itself. So no need to return or print anything
#include<bits/stdc++.h>

void replacePi(char input[]) {
	// Write your code here
    
int n=strlen(input);
	if(n<=1){
		return ;

	}
	if(input[0]=='p' && input[1]=='i'){
		input[0]='3';
		input[1]='.';
	
	
        for (int i = n + 2; i > 1; i--) {
          input[i] = input[i - 2];
        }

        input[2] = '1';
        input[3] = '4';
        }
   replacePi(input+1);
	
}



int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
