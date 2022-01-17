#include <bits/stdc++.h>
using namespace std;

int main() {

  int arr1[] = {1, 3, 5, 9};
  int arr2[] = {1, 2, 4, 6};

  int i = 0, j = 0;

  int arrSize1 = 4;
  int arrSize2 = 4;

  while (i < arrSize1 && j < arrSize2) {

    if (arr1[i] < arr2[j]) {
      cout << arr1[i++];
    } else {
      cout << arr2[j++];
    }
  }
  while (i < arrSize1) {
    cout << arr1[i++];
  }
  while (j < arrSize2) {
    cout << arr1[j++];
  }
}