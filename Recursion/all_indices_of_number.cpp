#include<iostream>

using namespace std;

#include<bits/stdc++.h>
int allIndexes(int input[], int size, int x, int output[]) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Save all the indexes in the output array passed and return the size of output array.
     Taking input and printing output is handled automatically.
  */
int static j=0;
  if(size==0)
    {
        return j;
    }
    else{

    static int i=0;
    if(input[0]==x){
        output[j]=i;
        j++;
        i++;
        allIndexes(input+1,size-1,x,output);

    }

    else{
        i++;
        allIndexes(input+1,size-1,x,output);
    }
    }
 
}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;
    

}


