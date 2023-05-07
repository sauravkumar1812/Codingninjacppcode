#include <iostream>
#include <cstring>
#include<string>
using namespace std;

string getCompressedString(string &input) {
   
   string s ="";
   int start =0, end =1,count=1;
   int n = input.size();

   while(start <= n && end <= n)
   {
      if(input[start] == input[end])
      {
          end++;
          count++;
      }
      else
      {
          s += input[start];

          if(count > 1)
          {
              s += to_string(count);
          }
          count = 1;
          start = end;
          end++; 
      }
   }

   return s;
}


int main() {
    int size = 1e6;
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
}