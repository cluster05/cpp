#include <bits/stdc++.h>
using namespace std;

void binarySearch(int arr[], int search, int size) {

  int low = 0, high = size;
  int mid = 0;

  while (low <= high) {
    mid = (low + high) / 2;

    if (arr[mid] == search) {
      cout << "element found" << endl;
      return;

    } else if (arr[mid] < search) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  cout << "element not found" << endl;
}

int main() {

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  sort(arr, arr + sizeof(arr) / sizeof(arr[0]));
  binarySearch(arr, 11, sizeof(arr) / sizeof(arr[0]));
}