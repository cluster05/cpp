#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int r) {

  int pivot = arr[l];
  int i = l;
  while (l < r) {
    do {
      l++;
    } while (arr[l] >= pivot);
    do {
      r--;
    } while (arr[r] < pivot);
    if (l < r) {
      swap(arr[l], arr[r]);
    }
  }
  swap(arr[r], arr[i]);
  return r;
}

void quick(int arr[], int l, int r) {

  if (l < r) {
    int j = partition(arr, l, r);
    quick(arr, l, j);
    quick(arr, j + 1, r);
  }
}

int main() {
  int arr[] = {5, 2, 10, 4, 3, 6, 7, 8, 1, 9};
  quick(arr, 0, 10);
  for (int el : arr)
    cout << el << " ";
}
