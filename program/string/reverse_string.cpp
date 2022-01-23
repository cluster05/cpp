#include <bits/stdc++.h>
using namespace std;

int main() {

  char string[] = "python";

  int i = 0;
  while (string[i] != '\0') {
    i++;
  }
  cout << i << endl;
  while (i >= 0) {
    cout << string[i];
    i--;
  }
}
