#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
double geometricSum(int k) {
    // Write your code here
if(k==0){
    return double(1);
}
double add=double(1)/double(pow(2,k));

double ans=geometricSum( k-1)+add;


return ans;
}



int main() {
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}
