#include <bits/stdc++.h>
using namespace std;

template <class T> class Stack {

private:
  int top, size, *stack;

public:
  Stack(int size) {
    top = -1;
    this->size = size;
    stack = new T[size];
  }

  bool isEmpty() { return top == -1; }

  bool isFull() { return top == size - 1; }

  void push(T ele) {
    if (!isFull()) {
      stack[++top] = ele;
    }
  }

  void pop() {
    if (!isEmpty()) {
      top--;
    }
  }

  T stacktop() { return stack[top]; }

  void peek(int position) {
    if (position < top) {
      cout << stack[top - position + 1];
    }
  }
};

int main() {
  Stack<int> s(3);
  s.push(10);
  s.push(20);
  s.push(30);
  s.pop();
  s.push(100);
  s.pop();

  cout << s.stacktop();
}
