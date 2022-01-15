#include <bits/stdc++.h>
using namespace std;

int main() {

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  reverse(arr, arr + sizeof(arr) / sizeof(arr[0]));

  for (auto ele : arr)
    cout << ele;
}