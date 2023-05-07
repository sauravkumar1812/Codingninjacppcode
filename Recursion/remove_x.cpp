#include <iostream>

using namespace std;
#include<cstring>
char removeX(char input[]) {
	if(strlen(input)==0){
        return 0;
    }
    char small=removeX(input+1);
    if(input[0]=='x'){
        for(int i=0;i<strlen(input);i++){
            input[i]=input[i+1];
        }
    }
    return small;
}
int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
