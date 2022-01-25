#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  Node *prev;
  Node *next;
  Node(int data) {
    this->data = data;
    next = NULL;
    prev = NULL;
  }
} * head;

void create(int arr[], int size) {

  head = new Node(arr[0]);
  head->prev = head->next = NULL;

  Node *last = head;
  for (int i = 1; i < size; i++) {
    Node *temp = new Node(arr[i]);
    temp->next = last->next;
    temp->prev = last;
    last->next = temp;
    last = temp;
  }
}

void display() {
  Node *temp = head;

  while (temp) {
    cout << temp->data << " <-> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

int main() {

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  create(arr, 10);
  display();
}
