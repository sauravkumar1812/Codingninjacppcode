#include <iostream>
#include <string>
using namespace std;

#include <iostream>
#include <string>
using namespace std;

void printpre(string input,int l,int r){
if(l==r){
	cout<<input<<endl;
}
else{
	for(int i=l;i<=r;i++){
      swap(input[l],input[i]);
	  printpre(input,l+1,r);
	  swap(input[l],input[i]);
	}
}
}

void printPermutations(string input){

    	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
	int n=input.length();
	int l=0;
	int r=n-1;
	printpre(input ,l, r);
}


int main() {
    string input;
    cin >> input;
    printPermutations(input);
    return 0;
}