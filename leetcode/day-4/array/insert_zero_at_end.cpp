#include <bits/stdc++.h>
using namespace std;

int main() {

  int arr[] = {0, 1, 0, 3, 12};
  int len = sizeof(arr) / sizeof(arr[0]);
  int t = 0;
  for (int i = 0; i < len; i++) {
    if (arr[i] != 0) {
      arr[t] = arr[i];
      t++;
    }
  }
  while (t < len) {
    arr[t] = 0;
    t++;
  }
  for (int el : arr)
    cout << el << " ";
}
