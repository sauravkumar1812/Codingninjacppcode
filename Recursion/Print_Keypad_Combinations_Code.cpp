#include <iostream>
#include <string>
#include "solution.h"
using namespace std;
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

string dial(int key){
    unordered_map<int,string>m;
    m[0]="";
    m[1]="";
    m[2]="abc";
    m[3]="def";
    m[4]="ghi";
    m[5]="jkl";
    m[6]="mno";
    m[7]="pqrs";
    m[8]="tuv";
    m[9]="wxyz";
    return m[key];
}



void pky(int num, string output){
    if(num==0){
        cout<<output<<endl;
        return;
    }
    string pd=dial(num%10);
    for(int i=0;i<pd.size();i++){
        pky(num/10,pd[i]+output);
    }
}

void printKeypad(int num) {
  /*
  Given an integer number print all the possible combinations of the keypad. You
  do not need to return anything just print them.
  */
  pky(num ,"");
}

int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
