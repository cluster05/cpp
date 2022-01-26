#include <bits/stdc++.h>
using namespace std;

bool isValidParenthesis(string s) {
  stack<char> st;
  for (int i = 0; i < s.size(); i++) {

    if (s[i] == '[' || s[i] == '{' || s[i] == '(') {
      st.push(s[i]);
    } else if (s[i] == ']' || s[i] == '}' || s[i] == ')') {

      if (st.empty())
        return false;

      if (st.top() != '[' && s[i] == ']')
        return false;
      else if (st.top() != '{' && s[i] == '}')
        return false;
      else if (st.top() != '(' && s[i] == ')')
        return false;

      st.pop();
    }
  }
  return st.empty();
}

int main() {

  vector<string> vs = {"a+b", "}{", "(a+b)", "{([])}", "[]{}()", "()a+a++a{}"};
  for (string s : vs) {
    cout << s << " : " << isValidParenthesis(s) << endl;
  }
}
