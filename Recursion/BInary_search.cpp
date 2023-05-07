
// binary search recursive

#include <iostream>
#include "solution.h"
using namespace std;

int bs(int input[],int l,int r,int element){


if(r>=l){

int mid=l+(r-l)/2;

if(element==input[mid]){
    return mid;
}
else if(element<input[mid]){
    return bs(input,  l,  mid-1,element);
} else {
  return bs(input, mid + 1, r, element);
}
}
return -1;
}




int binarySearch(int input[], int size, int element) {
    // Write your code here
int l=0;
int r=size-1;
 bs(input,l,r,element);

}

int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}

