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

  int meh = 0;
  int msf = INT_MIN;

  int l, r, _l;
  for (int i = 0; i < arr.size(); i++) {
    meh = meh + arr[i];
    if (meh < arr[i]) {
      meh = arr[i];
      _l = i;
    }
    if (msf < meh) {
      l = _l;
      r = i;
      msf = meh;
    }
  }

  for (int i = l; i <= r; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return msf;
}

int main() {
  vector<int> arr = {-2, -3, 4, -11, -2, 1, 5, -3};
  cout << maxSub(arr);
}
