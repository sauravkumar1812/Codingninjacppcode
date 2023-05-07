#include <algorithm>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;
#include <bits/stdc++.h>
int part(int input[], int l, int r) {
	int pivot=input[r];
	int i=(l-1);
	for(int j=l;j<r;j++){
		if(input[j]<pivot){
			i++;
		
			    //  swap(input[i], input[j]);
				int temp=input[i];
				input[i]=input[j];
				input[j]=temp;

		}
	}
	// swap(input[i+1],input[r]);
	int temp1=input[i+1];
	input[i+1]=input[r];
	input[r]=temp1;
	return (i+1);
}

void sort(int input[], int l, int r) {
  if (l < r) {
    int pi = part(input, l, r);
    sort(input, l, pi - 1);
    sort(input, pi + 1, r);
  }
}

void quickSort(int input[], int size) {
 
  int l = 0;
  int r = size - 1;

  sort(input, l, r);
}

class Runner {
    vector<int> v;

public:
    void takeInput() {
        int n;
        cin >> n;
        v.resize(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
    }

    void execute() {
        int n = (int)v.size();

        int* input = new int[n];
        for (int i = 0; i < n; i++)
            input[i] = v[i];

        quickSort(input, 0, n - 1);

        free(input);
    }

    void executeAndPrintOutput() {
        int n = (int)v.size();

        int* input = new int[n];
        for (int i = 0; i < n; i++)
            input[i] = v[i];

        quickSort(input, 0, n - 1);

        for (int i = 0; i < n; i++)
            cout << input[i] << ' ';
        cout << '\n';

        free(input);
    }
};

int main() {
    // freopen("./Testcases/large/in/input.txt", "r", stdin);
    // freopen("./Testcases/large/out/output.txt", "w", stdout);
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();
    return 0;
}