#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char source, char auxillary, char desination) {

  if (n > 0) {
    towerOfHanoi(n - 1, source, desination, auxillary);
    printf("%c - %c\n", source, desination);
    towerOfHanoi(n - 1, auxillary, source, desination);
  }
}

int main() { towerOfHanoi(5, 'A', 'B', 'C'); }