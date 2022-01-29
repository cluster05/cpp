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

int calculateHeight(Node *root) {

  if (root == NULL)
    return -1;
  if (root->left == NULL && root->right == NULL)
    return 0;
  return 1 + max(calculateHeight(root->left), calculateHeight(root->right));
}

int NodeWithDegreeTwo(Node *root) {

  int x, y;

  if (root) {
    x = NodeWithDegreeTwo(root->left);
    y = NodeWithDegreeTwo(root->right);

    if (root->left != NULL && root->right != NULL) {
      return x + y + 1;
    } else {
      return x + y;
    }
  }
  return 0;
}

int LeafNode(Node *root) {

  int x, y;
  if (root) {
    x = LeafNode(root->left);
    y = LeafNode(root->right);
    if (root->left == NULL && root->right == NULL) {
      return 1 + x + y;
    } else {
      return x + y;
    }
  }
  return 0;
}

int CountNode(Node *root) {

  int x, y;

  if (root) {

    x = CountNode(root->left);
    y = CountNode(root->right);
    return x + y + 1;
  }
  return 0;
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
  cout << "\nNum Node  : " << CountNode(root);
  cout << "\nHeight    : " << calculateHeight(root);
  cout << "\nNode 2 Deg: " << NodeWithDegreeTwo(root);
  cout << "\nLeaf Node : " << LeafNode(root);
}