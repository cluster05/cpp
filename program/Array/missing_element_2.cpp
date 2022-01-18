#include <bits/stdc++.h>
using namespace std;

int main() {

  int arr[] = {4, 6, 7, 10, 11, 15};

  int size = sizeof(arr) / sizeof(arr[0]);

  int diff = arr[0];

  for (int i = 0; i < size; i++) {

    if (diff != arr[i] - i) {
      while (diff < arr[i] - i) {
        cout << "Missing " << diff + i << endl;
        diff++;
      }
    }
  }
}