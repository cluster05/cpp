#include <bits/stdc++.h>
using namespace std;

int main() {

  int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};

  int meh = 0;
  int msf = INT_MIN;

  int len = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < len; i++) {
    meh = meh + arr[i];
    if (meh < arr[i])
      meh = arr[i];
    if (meh > msf)
      msf = meh;
  }
  cout << " MAX " << msf;
}
