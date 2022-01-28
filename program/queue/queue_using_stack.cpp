#include <bits/stdc++.h>
using namespace std;

/*
    Queue using Stack
 */

class QueueUsingStack {
private:
  stack<int> s1, s2;

public:
  QueueUsingStack() {}

  void enqueue(int key) {
    s1.push(key);
    cout << "ENQUEUE :" << key << endl;
  }

  void dequeue() {
    if (!s2.empty()) {
      int ele = s2.top();
      s2.pop();
      cout << "DEQUEUE :" << ele << endl;
    } else {
      if (!s1.empty()) {
        while (!s1.empty()) {
          int ele = s1.top();
          s2.push(ele);
          s1.pop();
        }
        int ele = s2.top();
        s2.pop();
        cout << "DEQUEUE :" << ele << endl;
      }
    }
  }
};

int main() {

  QueueUsingStack q;
  q.enqueue(10);
  q.enqueue(20);
  q.enqueue(30);
  q.dequeue();
  q.enqueue(40);
  q.dequeue();
}