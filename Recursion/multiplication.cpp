#include <iostream>

using namespace std;
int multiplyNumbers(int m, int n) {
    // Write your code here
if(n==0){
    return 0;
}
int mul=m*n;
return mul;

}



int main() {
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}
