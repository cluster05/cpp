#include <bits/stdc++.h>
using namespace std;

struct Node {
  Node *left, *right;
  int data;
  Node(int data) {
    this->data = data;
    left = right = NULL;
  }
};

void preorder(Node *node) {

  if (node == NULL)
    return;
  cout << node->data << " ";
  preorder(node->left);
  preorder(node->right);
}

void postorder(Node *node) {
  if (node == NULL)
    return;
  postorder(node->left);
  postorder(node->right);
  cout << node->data << " ";
}

void inorder(Node *node) {
  if (node == NULL)
    return;
  inorder(node->left);
  cout << node->data << " ";
  inorder(node->right);
}

void levelWiseTravesel(Node *root) {

  queue<Node *> q;

  q.push(root);

  while (!q.empty()) {

    Node *temp = q.front();
    q.pop();
    cout << temp->data << " ";
    if (temp->left != NULL) {
      q.push(temp->left);
    }
    if (temp->right != NULL) {
      q.push(temp->right);
    }
  }
}

void printGivenLevel(Node *root, int level) {
  if (root == NULL)
    return;
  if (level == 1)
    cout << root->data << " ";
  if (level > 1) {
    printGivenLevel(root->left, level - 1);
    printGivenLevel(root->right, level - 1);
  }
}

int main() {

  /*
            10
          /    \
         20    30
          \   /
           40 50
   */

  Node *root = new Node(10);
  root->left = new Node(20);
  root->right = new Node(30);

  root->left->right = new Node(40);
  root->right->left = new Node(50);

  cout << "\nPreorder  : ";
  preorder(root);
  cout << "\nPostorder : ";
  postorder(root);
  cout << "\nInorder   : ";
  inorder(root);
  cout << "\nLevelWise : ";
  levelWiseTravesel(root);
  cout << "\nPrint 3lvl: ";
  printGivenLevel(root, 3);
}