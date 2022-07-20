#include <bits/stdc++.h>
using namespace std;

struct Node {
  int value;
  Node *left, *right;
  Node(int value) {
    this->value = value;
    left = right = nullptr;
  }
};
pair<int, int> maxDiameter(Node *root) {
  if (root == nullptr)
    return {0, 0};

  pair<int, int> left = maxDiameter(root->left);
  pair<int, int> right = maxDiameter(root->right);

  int internal = max(left.second, right.second);
  if (left.first + right.first + 1 > internal) {
    internal = left.first + right.first + 1;
  }
  return {max(left.first, right.first) + 1, internal};
}

int main() {}
