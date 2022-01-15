#include <bits/stdc++.h>
using namespace std;

void increaseSize(int *source, int *size) {
  int SIZE = 2 * *size;
  int *desination = new int[SIZE];
  for (int i = 0; i < *size; i++)
    desination[i] = source[i];
  *size = SIZE;
  source = desination;
  delete[] desination;
}

int main() {

  int SIZE = 1;
  int *p = new int[SIZE];

  increaseSize(p, &SIZE);
  increaseSize(p, &SIZE);
  increaseSize(p, &SIZE);

  for (int i = 0; i < SIZE; i++) {
    cout << p[i] << "->";
  }
}