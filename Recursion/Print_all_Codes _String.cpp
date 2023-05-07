#include <iostream>
#include "solution.h"
using namespace std;
#include <string.h>
using namespace std;

void printcodes(string input,string output){
    if(input.empty()){
        cout<<output<<endl;
        return ;
    }
    char c1=input[0]-'0'+'a'-1;
    int b=stoi(input.substr(0,2));
    char c2=b-1+'a';
    printcodes(input.substr(1),output+c1);
    if(b>=10 && b<=26){
         printcodes(input.substr(2),output+c2);
    }
}

void printAllPossibleCodes(string input) {
    /*
    Given the input as a string, print all its possible combinations. You do not need to return anything.
    */
    string output="";
    printcodes(input,output);

}


int main(){
    string input;
    cin >> input;

    printAllPossibleCodes(input);
    return 0;
}
