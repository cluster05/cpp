#include <bits/stdc++.h>
using namespace std;

int main() {

  string s = "11 22 33";
  string delim = " ";

  int start = 0;
  auto end = s.find(delim);
  while (end != string::npos) {
    cout << s.substr(start, end - start) << endl;
    start = end + delim.length();
    end = s.find(delim, start);
  }
  cout << s.substr(start, end - start) << endl;
}
