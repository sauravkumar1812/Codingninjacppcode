#include <iostream>

using namespace std;
int sumOfDigits(int n) {
    // Write your code here

int sum=0;
if(n==0){
    return 0;

}
if (n >= 1) {
  sum += n % 10;
}
n=n/10;
int add=sumOfDigits( n)+sum;
return add;
}



int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}
