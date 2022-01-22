#include <bits/stdc++.h>
using namespace std;

int main() {

  int arr[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
  int sum = 10;

  int size = sizeof(arr) / sizeof(arr[0]);

  int max = -1;
  for (int el : arr)
    if (max < el)
      max = el;

  int hash[max];
  for (int i = 0; i < max; i++)
    hash[i] = 0;

  for (int i = 0; i < size; i++) {
    int diff = sum - arr[i];
    if (diff >= 0 && hash[diff]) {
      cout << arr[i] << " + " << diff << " = 10" << endl;
    }
    hash[arr[i]] = 1;
  }
}