#include <bits/stdc++.h>
using namespace std;

int main() {

  char string[] = "HOW ARE  OU";

  int i = 0, VCount = 0, CCount = 0, word = 1;
  while (string[i] != '\0') {

    if (string[i] == 'A' || string[i] == 'E' || string[i] == 'I' ||
        string[i] == 'O' || string[i] == 'U') {
      VCount++;
    } else {
      if (string[i] > 65 || string[i] < 122) {
        CCount++;
      }
    }

    if (string[i] == ' ' && string[i - 1] != ' ') {
      word++;
    }

    i++;
  }
  cout << CCount << endl;
  cout << VCount << endl;
  cout << word;
}
