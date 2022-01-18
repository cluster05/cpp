#include <bits/stdc++.h>
using namespace std;

int main() {

  int arr[] = {11, 6, 7, 10, 15, 4};
  int max = -1, min = 9999;
  for (int el : arr) {
    if (el > max) {
      max = el;
    }
    if (el < min) {
      min = el;
    }
  }

  int hash[max - min];
  for (int i = 0; i < max - min; i++)
    hash[i] = 0;

  for (int el : arr)
    hash[el - min]++;

  for (int i = min; i < max; i++) {
    // cout << hash[i] << " ";
    if (!hash[i])
      cout << i << " " << endl;
  }
}