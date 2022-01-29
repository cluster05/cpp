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
}