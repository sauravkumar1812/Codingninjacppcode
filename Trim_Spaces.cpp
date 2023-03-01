#include <iostream>
#include <cstring>
using namespace std;

void trimSpaces(char input[]) {
  string temp="";
  for(int i=0;input[i]!='\0';i++){
    if(input[i]!=' '){
      temp+=input[i];
    }
  }
  for(int i=0;i<temp.size();i++){
    input[i]=temp[i];
  }
  input[temp.size()]='\0';
}

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}

