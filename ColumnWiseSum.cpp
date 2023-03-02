#include<iostream>
using namespace std;


int main(){

    

int count;
int a[1000] [1000];
int m,n;
cin>>m>>n;
// For taking input of 2D arrays
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cin>>a[i] [j];
	}
}
// For printing sum of column
	int sum=0;
for(int j=0;j<n;j++){
     
  for (int i = 0; i < m; i++) {

    sum = sum + a[i] [j];

  }
  cout<<sum<<" ";
sum=0;
}

  
}

 


