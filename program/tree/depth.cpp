#include <bits/stdc++.h>
using namespace std;

// struct TreeNode {
//   TreeNode *left;
//   TreeNode *right;
//   int val;
//   TreeNode(int val) {
//     this->val = val;
//     left = nullptr;
//     right = nullptr;
//   }
// };

int main() {

  string s = "Hello";
  cout << s.substr(1, s.size());

  // TreeNode *root = new TreeNode(10);
  // root->left = new TreeNode(20);
  // root->right = new TreeNode(30);

  // root->left->right = new TreeNode(40);
  // root->left->right->left = new TreeNode(50);

  // if (root == NULL)
  //   return 0;
  // queue<TreeNode *> q;
  // q.push(root);
  // q.push(NULL);
  // int depth = 0;

  // while (!q.empty()) {
  //   TreeNode *t = q.front();
  //   q.pop();

  //   if (t == NULL)
  //     depth++;

  //   if (t != NULL) {
  //     cout << t->val << " ";
  //     if (t->left)
  //       q.push(t->left);
  //     if (t->right)
  //       q.push(t->right);
  //   } else if (!q.empty()) {
  //     cout << "NULL ";
  //     q.push(NULL);
  //   }
  // }
  // cout << depth;
}