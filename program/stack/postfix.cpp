#include <bits/stdc++.h>
using namespace std;

map<char, int> precedance = {{'+', 1}, {'-', 1}, {'*', 2}, {'/', 2}};

void postfix(string expression) {
  stack<char> sc;

  string pre = "";
  for (int i = 0; i < expression.size(); i++) {

    if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' ||
        expression[i] == '/') {
      while (!sc.empty() && precedance[expression[i]] <= precedance[sc.top()]) {
        pre += sc.top();
        sc.pop();
      }
      sc.push(expression[i]);
    } else {
      pre += expression[i];
    }
  }
  while (!sc.empty()) {
    pre += sc.top();
    sc.pop();
  }
  cout << expression << " \t " << pre << endl;
}

int main() {

  vector<string> vs = {"a+b", "a*b", "a-b*c", "a*b/c-d", "a+b*c-d/e"};
  for (string s : vs) {
    postfix(s);
  }
}
