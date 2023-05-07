#include <iostream>
using namespace std;
#include "solution.h"


void  printSubsetsOfArray(int input[],int size,int output[],int outputsize){
	if(size==0){
		for(int i=0;i<outputsize;i++){
			cout<<output[i]<<" ";
		}
		cout<<endl;
		return;
	}
 printSubsetsOfArray(input+1,  size-1, output, outputsize);

int newoutput[20]={};
for(int i=0;i<outputsize;i++){
	newoutput[i]=output[i];
}
newoutput[outputsize]=input[0];

 printSubsetsOfArray(input+1,  size-1, newoutput, outputsize+1);
}

void printSubsetsOfArray(int input[], int size) {
	// Write your code here
    
	int ans[20]={};
	 printSubsetsOfArray(input,size,ans,0);
}


int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  printSubsetsOfArray(input, length);
}
