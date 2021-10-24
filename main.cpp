#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v(26, 0);
  string s = "fhadsfsadofisadjfosa";
  for (int i = 0; i < s.size(); i++) {
    v[s[i] - 'a']++;
  }

  for (int i = 0; i < v.size(); i++) {
    cout << char('a' + i) << " ";
  }
  cout << endl;
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
}