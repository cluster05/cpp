#include <bits/stdc++.h>
using namespace std;

class Queue {

private:
  int front, rear, size, *queue;

public:
  Queue(int size) {
    front = rear = -1;
    this->size = size;
    queue = new int[size];
    cout << "Queue() called" << endl;
  }

  ~Queue() {
    delete[] queue;
    cout << "~Queue() called" << endl;
  }

  bool isEmpty() { return front == rear; }

  bool isFull() { return rear == size - 1; }

  void enqueue(int key) {
    if (!isFull()) {
      queue[++rear] = key;
      cout << "Enqueue " << key << endl;
    } else {
      cout << "Overflow " << key << endl;
    }
  }
  void dequeue() {
    if (!isEmpty()) {
      front++;
      cout << "Dequeue " << queue[front] << endl;

    } else {
      cout << "Underflow" << endl;
    }
  }
};

int main() {
  Queue *q = new Queue(5);
  q->dequeue();
  q->enqueue(10);
  q->enqueue(20);
  q->enqueue(30);
  q->enqueue(40);
  q->enqueue(50);
  q->enqueue(60);

  q->dequeue();
  q->dequeue();
  q->dequeue();
  q->dequeue();
  q->dequeue();
  q->dequeue();

  q->enqueue(10);

  delete q;
}