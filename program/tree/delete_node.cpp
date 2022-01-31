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

class BST {

private:
  Node *root;

  bool searchR(Node *temp, int key) {
    if (temp) {
      if (temp->data == key)
        return true;
      else if (temp->data < key)
        return searchR(temp->right, key);
      else if (temp->data > key)
        return searchR(temp->left, key);
    }
    return false;
  }

public:
  BST() { root = NULL; }
  ~BST() { delete root; }

  void insert(int key) {
    if (root == NULL) {
      root = new Node(key);
      return;
    }

    Node *temp = root, *prev = NULL;

    while (temp) {
      prev = temp;
      if (temp->data == key)
        return;
      else if (temp->data > key) {
        temp = temp->left;
      } else if (temp->data < key) {
        temp = temp->right;
      }
    }
    Node *node = new Node(key);

    if (prev->data > key)
      prev->left = node;
    else
      prev->right = node;
  }

  void display() {
    cout << "\nInorder Print ";
    inorder(root);
  }

  void inorder(Node *r) {
    if (r == NULL)
      return;
    inorder(r->left);
    cout << r->data << " ";
    inorder(r->right);
  }

  bool search(int key) {

    Node *temp = root;
    while (temp) {
      if (temp->data == key) {
        return true;
      } else if (temp->data < key) {
        temp = temp->right;
      } else if (temp->data > key) {
        temp = temp->right;
      }
    }
    return false;
  }

  bool find(int key) { return searchR(root, key); }

  void deleteNode(int key) { deletekey(root, key); }

  Node *deletekey(Node *node, int key) {}
};

int main() {
  vector<int> arr = {3, 1, 2, 4, 5, 8, 6, 7, 8, 9, 10};

  BST bst;
  for (int el : arr)
    bst.insert(el);

  bst.display();
  // cout << "\nFound : " << bst.find(2);
  bst.deleteNode(7);
  bst.display();
}