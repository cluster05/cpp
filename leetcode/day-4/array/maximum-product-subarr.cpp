#include <bits/stdc++.h>
using namespace std;

int maxSub(vector<int> &arr) {

  // array len
  int max = 0;
  int l, r;
  for (int i = 1; i <= arr.size(); i++) {
    // array start from
    for (int j = 0; j < arr.size() - i; j++) {
      // print array
      int prod = 1;
      for (int k = j; k <= i + j; k++) {
        prod *= arr[k];
      }
      if (prod > max) {
        max = prod;
        l = j;
        r = j + i;
      }
    }
  }

  for (int i = l; i < r; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return max;
}

int main() {
  vector<int> arr = {-2, 3, 4, -11, 2, 1, 5, -100};
  cout << maxSub(arr);
}

/*

  @2nd approch

  #include <bits/stdc++.h>
using namespace std;

int maxSub(vector<int> &arr) {

  int ma = 1, mi = 1, ans = 0;
  for (int i = 0; i < arr.size(); i++) {

    if (arr[i] < 0) {
      swap(ma, mi);
    }
    ma = max(ma, arr[i] * ma);
    mi = min(mi, arr[i] * mi);
    if (ma > ans)
      ans = ma;
  }
  return ans;
}

int main() {
  vector<int> arr = {-2, 3, 0, 0, -10, -100};
  cout << maxSub(arr);
}


 */