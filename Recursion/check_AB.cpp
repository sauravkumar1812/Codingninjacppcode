#include <iostream>
#include "solution.h"
using namespace std;
bool checkAB(char input[]) {
    // Base case 1
    if (input[0] == '\0') {
        return true;
    }
    // Base case 2
    if (input[0] != 'a') {
        return false;
    }
    // Recursive case 1
    if (input[1] == 'b') {
        if (input[2] == 'b') {
            return checkAB(input + 3);  
        } else {
            return false;
        }
    }
    
    // Recursive case 2
    return checkAB(input + 1);
}


int main() {
    char input[100];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}
