#include <iostream>

using namespace std;

template <class T> 
class Node {
public:
    T value;
    Node* next;
    Node(T val): value(val), node(NULL) {}
};
template <class T> 
class LinkedList {
    public:
    Node<T>* head;
    Node<T>* getLastNode();
    void push_back(Node<T> *n);
};

int main() {

    return 0;
}