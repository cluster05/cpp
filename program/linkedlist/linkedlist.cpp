#include <bits/stdc++.h>
using namespace std;

struct Node {
  int val;
  Node *next;
  Node(int val) {
    this->val = val;
    next = NULL;
  }
} * head;

void create(int arr[], int n) {

  Node *last, *temp;
  for (int i = 0; i < n; i++) {
    if (head == NULL) {
      head = new Node(arr[i]);
      last = head;
    } else {
      temp = new Node(arr[i]);
      last->next = temp;
      last = last->next;
    }
  }
}

void display() {
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
  cout << "NULL";
}

void displayRecursive(Node *temp) {
  if (temp == NULL) {
    cout << "NULL" << endl;
    return;
  }
  cout << temp->val << "->";
  displayRecursive(temp->next);
}

int main() {
  head = NULL;
  display();

  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  create(arr, 10);
  displayRecursive(head);
}
