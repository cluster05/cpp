#include <bits/stdc++.h>
using namespace std;

int main() {

  int arr1[] = {1, 3, 5, 6, 9};
  int arr2[] = {1, 2, 3, 4, 6};

  int size1 = 5;
  int size2 = 5;
  int unionArray[10] = {0};

  int i = 0, j = 0, k = 0;
  while (i < size1 && j < size2) {
    if (arr1[i] == arr2[j]) {
      unionArray[k++] = arr1[i++];
      j++;
    } else if (arr1[i] > arr2[j])
      unionArray[k++] = arr2[j++];
    else
      unionArray[k++] = arr1[i++];
  }

  for (auto wl : unionArray)
    cout << wl << " ";

  cout << endl;

  int interSection[10] = {0};

  i = 0, j = 0, k = 0;
  while (i < size1 && j < size2) {
    if (arr1[i] == arr2[j]) {
      interSection[k++] = arr1[i++];
      j++;
    } else if (arr1[i] > arr2[j])
      j++;
    else
      i++;
  }

  for (auto wl : interSection)
    cout << wl << " ";
}