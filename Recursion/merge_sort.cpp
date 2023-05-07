#include <bits/stdc++.h>

using namespace std;
void merge(int input[], int l, int mid, int r) {

  int a1 = mid - l + 1;
  int a2 = r - mid;

  int first[a1];
  int second[a2];

  for (int i = 0; i < a1; i++) {
    first[i] = input[l + i];
  }

  for (int j = 0; j < a2; j++) {
    second[j] = input[mid + j + 1];
  }
  int i = 0;
  int j = 0;
  int k = l;

  while (i < a1 && j < a2) {
    if (first[i] <= second[j]) {
      input[k] = first[i];
      i++;
      k++;
    } else {
      input[k] = second[j];
      j++;
      k++;
    }
  }
  while (i < a1) {
    input[k] = first[i];
    i++;
    k++;
  }
  while (j < a2) {
    input[k] = second[j];
    j++;
    k++;
  }
}

void sort(int input[], int l, int r) {
  if (l < r) {

    int mid = (l + r) / 2;
    sort(input, l, mid);
    sort(input, mid + 1, r);
    merge(input, l, mid, r);
  }
}

void mergeSort(int input[], int size) {
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
    v.assign(n, 0);
    for (int i = 0; i < n; ++i) {
      cin >> v[i];
    }
  }

  void execute() {
    auto c = v;
    mergeSort(c, 0, (int)c.size() - 1);
  }

  void executeAndPrintOutput() {
    auto c = v;
    mergeSort(c, 0, (int)c.size() - 1);
    for (int i = 0; i < c.size(); ++i)
      cout << c[i] << ' ';
    cout << endl;
  }
};

int main() {
  // freopen("./Testcases/large/in/input30.txt", "r", stdin);
  // freopen("./Testcases/large/out/output30.txt", "w", stdout);
  Runner runner;
  runner.takeInput();
  runner.executeAndPrintOutput();

  return 0;
}
