
#include <iostream>

using namespace std;

template <typename T>
class Stack
{
private:
  struct Node
  {
    T data;
    Node *next;
    Node(const T &data) : data(data), next(nullptr) {}
  };
  Node *topNode;

public:
  Stack() : topNode(nullptr) {}

  ~Stack()
  {
    while (!isEmpty())
    {
      pop();
    }
  }

  void push(const T &data)
  {
    Node *newNode = new Node(data);
    newNode->next = topNode;
    topNode = newNode;
  }

  void pop()
  {
    if (isEmpty())
    {
      cout << "Stack underflow!" << endl;
      return;
    }
    Node *temp = topNode;
    topNode = topNode->next;
    delete temp;
  }

  T top() 
  {
    if (isEmpty())
    {
      cout << "Stack is empty!" << endl;
      exit(1);
    }
    return topNode->data;
  }

  bool isEmpty()
  {
    return topNode == nullptr;
  }
};

int main()
{
  Stack<int> myStack;
 myStack.push(10);
  myStack.push(20);
  myStack.push(30);

  cout << "Top element: " << myStack.top() << endl;
  myStack.pop();
  myStack.pop();
  cout << "Top element after pops: " << myStack.top() << endl;
  cout << "Is the stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << endl;

  return 0;
}
