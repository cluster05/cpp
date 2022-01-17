#include <bits/stdc++.h>
using namespace std;

int main() {

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 9, 10};
  int size = sizeof(arr) / sizeof(arr[0]);

  // [1]
  /*
    sum of element =  n(n-1) / 2
   */
  int sum = 0;
  for (int ele : arr)
    sum += ele;

  int n = arr[size - 1];
  cout << "Missing Number is " << (n * (n + 1) / 2) - sum << endl;
  ;

  //[2]
  int arr1[] = {5, 6, 7, 9, 10};
  int size1 = sizeof(arr1) / sizeof(arr1[0]);

  int diff = arr1[0];
  for (int i = 0; i < size1; i++) {
    if (diff != arr1[i] - i) {
      cout << "Missing Element is " << i + diff << endl;
      break;
    }
  }
}