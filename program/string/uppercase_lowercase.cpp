#include <bits/stdc++.h>
using namespace std;

int main() {

  char string[] = "WELCOME";

  int i = 0;
  while (string[i] != '\0') {
    string[i] = 32 + string[i];
    i++;
  }
  cout << string;
}