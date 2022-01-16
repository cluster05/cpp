#include <bits/stdc++.h>
using namespace std;

int main() {

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int size = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < size / 2; i++) {
    int temp = arr[i];
    arr[i] = arr[size - i - 1];
    arr[size - i - 1] = temp;
  }
  for (auto el : arr)
    cout << el << " ";
}

/*

#include <bits/stdc++.h>
using namespace std;

int main() {

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int size = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0, j = size - 1; i < j; i++, j--) {
    int temp = arr[j];
    arr[j] = arr[i];
    arr[i] = temp;
  }
  for (auto el : arr)
    cout << el << " ";
}
 */