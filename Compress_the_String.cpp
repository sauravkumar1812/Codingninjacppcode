#include <iostream>
#include <cstring>
#include<string>
using namespace std;



int main() {
    int size = 1e6;
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
}