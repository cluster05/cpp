#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  Node *next;
  Node(int data) { this->data = data; }
} * head;

void create(int arr[], int size) {

  head = new Node(arr[0]);
  head->next = head;
  Node *last = head;

  for (int i = 1; i < size; i++) {
    Node *temp = new Node(arr[i]);
    temp->next = last->next;
    last->next = temp;
    last = last->next;
  }
}

void display() {
  Node *temp = head;
  do {
    cout << temp->data << " ";
    temp = temp->next;
  } while (temp != head);
  cout << endl;
}

void rDisplay(Node *temp) {
  static int flag = 0;
  if (head != temp || flag == 0) {
    flag++;
    cout << temp->data << " ";
    rDisplay(temp->next);
  }
}

void insertlast(int data) {
  Node *temp = head;
  while (temp->next != head) {
    temp = temp->next;
  }

  Node *node = new Node(data);
  node->next = temp->next;
  temp->next = node;
}

void insertfirst(int data) {
  Node *temp = head, *node = new Node(data);

  while (temp->next != head) {
    temp = temp->next;
  }
  node->next = head;
  head = node;
  temp->next = node;
}

void deletefirst() {

  Node *temp = head;

  while (temp->next != head) {
    temp = temp->next;
  }

  temp->next = head->next;
  head = head->next;
}

void deletelast() {

  Node *temp = head;
  while (temp->next->next != head) {
    temp = temp->next;
  }

  temp->next = head;
}

int main() {

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  create(arr, 10);
  display();
  rDisplay(head);
  insertfirst(100);
  display();
  insertlast(200);
  display();
  deletefirst();
  display();
  deletelast();
  display();
}
