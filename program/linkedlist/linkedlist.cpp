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

void NumberOfNode() {
  Node *temp;
  cout << "NUMBER OF NODE : ";
  if (temp == NULL) {
    cout << 0 << endl;
    return;
  }
  int count = 0;
  while (temp) {
    count++;
    temp = temp->next;
  }
  cout << count << endl;
}

void Search(int ele) {
  Node *temp = head, *prev = NULL;
  if (temp == NULL) {
    cout << "NOT FOUND" << endl;
    return;
  }
  while (temp) {
    if (temp->val == ele) {

      cout << "FOUND" << endl;
      prev->next = temp->next;
      temp->next = head;
      head = temp;
      return;
    }
    prev = temp;
    temp = temp->next;
  }

  cout << "NOT FOUND" << endl;
}

void insert(int ele, int pos) {

  Node *temp = head;
  if (pos == 1) {
    Node *newNode = new Node(ele);
    newNode->next = head;
    head = newNode;
    return;
  }
  for (int i = 1; i < pos - 1; i++) {
    if (temp == NULL) {
      return;
    }
    temp = temp->next;
  }
  Node *newNode = new Node(ele);
  newNode->next = temp->next;
  temp->next = newNode;
}
void insertLast(int ele) {

  Node *temp = new Node(ele);
  Node *headCp = head;
  while (headCp->next != NULL) {
    headCp = headCp->next;
  }
  headCp->next = temp;
}
int main() {
  head = NULL;
  display();

  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  create(arr, 10);
  display();
  cout << "\nRecursion Display : ";
  displayRecursive(head);
  NumberOfNode();
  Search(6);
  display();
  Search(10);
  display();
}
