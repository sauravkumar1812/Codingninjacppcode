#include <iostream>

using namespace std;
// Change in the given string itself. So no need to return or print the changed string.
#include<bits/stdc++.h>
void helper(char a[],int i){
  int n = strlen(a);

if(a[i] == '\0')
return ;
   if(i == n){
     return ;
   }
 int t = i;
   if(a[i] == a[i+1]){
     a[i+1] = '*';
     i = i +2;
     for(int k = n-1;k<=i+2;k--){
       a[k+1] = a[k];
     }
   helper(a,t+2);
   }
   else
   helper(a,t+1);

}
void pairStar(char input[]) {

int len = strlen(input);
    if(input[0]=='\0')
        return;
    if(input[0]==input[1]){
        
        for(int i=len+1;i>=2;i--){
            input[i]=input[i-1];
        }
        input[1]='*';
        pairStar(input+2);
    }
   
        pairStar(input+1);
}

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
