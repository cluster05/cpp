#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> arr) {
  int sum = 0;
  for (int i = 0; i < arr.size(); i++) {
    sum += arr[i];
  }
  return sum;
}

int maxSub(vector<int> &arr) {

  int max = INT_MIN;
  int l = 0, r = 0;
  // length
  for (int i = 1; i <= arr.size(); i++) {
    // start from index
    for (int j = 0; j < arr.size() - i; j++) {
      // print from index to length
      int sum = 0;
      for (int k = j; k < i + j; k++) {
        sum += arr[k];
      }
      if (sum > max) {
        max = sum;
        l = j;
        r = j + i;
      }
    }
  }

  cout << " L " << l << " R " << r << endl;

  return max;
}

int main() {
  vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
  cout << maxSub(arr);
}
