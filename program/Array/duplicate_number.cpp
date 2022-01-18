#include <bits/stdc++.h>
using namespace std;

int main() {

  int arr[] = {1, 2, 3, 3, 4, 5, 6, 7, 8, 8, 8, 9, 10};

  int size = sizeof(arr) / sizeof(arr[0]);

  int preRep = -1;
  for (int i = 0; i < size; i++) {
    if (arr[i] == arr[i + 1] && arr[i + 1] != preRep) {
      preRep = arr[i];
      cout << arr[i] << " ";
    }
  }
}