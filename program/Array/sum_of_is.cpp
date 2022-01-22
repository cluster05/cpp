#include <bits/stdc++.h>
using namespace std;

int main() {

  int arr[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
  int sum = 10;

  int size = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] + arr[j] == 10) {
        cout << arr[i] << " " << arr[j] << " = 10 " << endl;
      }
    }
  }
}