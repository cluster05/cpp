#include <bits/stdc++.h>
using namespace std;

struct Node {
  int val;
  Node *next;
  Node(int val) {
    this->val = val;
    next = NULL;
  }
};

Node *create(int arr[], int n) {

  Node *head = new Node(arr[0]), *last = head;
  for (int i = 1; i < n; i++) {
    Node *temp = new Node(arr[i]);
    last->next = temp;
    last = last->next;
  }
  return head;
}

void display(Node *head) {
  Node *temp = head;
  if (temp == NULL) {
    cout << "NULL" << endl;
    return;
  }
  cout << "LINKED LIST : ";
  while (temp) {
    cout << temp->val << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

void merge(Node *l1, Node *l2) {
  Node *temp1 = l1, *temp2 = l2;
  while (temp1->next != NULL) {
    temp1 = temp1->next;
  }
  temp1->next = temp2;
}
int main() {
  Node *l1 = NULL, *l2 = NULL;

  int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

  l1 = create(arr1, 10);
  display(l1);
  l2 = create(arr2, 10);
  display(l2);

  merge(l1, l2);
  display(l1);
}
