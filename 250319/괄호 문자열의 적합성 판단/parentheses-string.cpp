#include <iostream>
using namespace std;

typedef char Element;

class ArrayStack {
   private:
    Element* arr;
    int capacity;
    int top_index;

   public:
    ArrayStack(int n) {
        arr = new Element[n];
        capacity = n;
        top_index = -1;
    }

    int size() const { return top_index; }

    bool empty() const { return top_index == -1; }

    Element top() const {
        if (empty()) {
            cout << "Empty Error\n";
            return NULL;
        }

        return arr[top_index];
    }

    void push(const Element& value) {
        if (size() >= capacity) {
            cout << "Array Stack is full\n";
            return;
        }
        arr[++top_index] = value;
    }

    Element pop() {
        if (empty()) {
            cout << "Array Stack if empty\n";
            return NULL;
        }
        top_index--;
        return arr[top_index + 1];
    }
};

// /* class Node {
//    private:
//     Element val;
//     Node* next;
//     friend class ListStack;

//    public:
//     Node(Element elem) : val(elem), next(nullptr);
// };
// */

// /* class LinkedList {
// private:
// Node* head;
// Node* tail;
// int N;

// public:
// LinkedList() : head(nullptr), tail(nullptr), N(0) {}

// int size() const {
//     return N;
// }

// bool empty() const {
//     return head == nullptr;
// }

// Element front() const {
//     if (empty()) {
//         cout << "list is empty\n";
//         return 0;
//     }
//     return head->val;
// }

// Element back() const {
//     if (empty()) {
//         cout << "list if empty\n";
//         return 0;
//     }

//     return tail->val;
// }

// Element at(int index) const {
//     if (empty()) {
//         cout << "list if empty\n";
//         return 0;
//     }
//     if (index < 0 || index >= N) {
//         cout << "out of index\n";
//         return
//     }

//     Node* curr = head;
//     while (index--)
//         curr = curr->next;
//     return curr->val;
// }

// void push_front(const Element& val) {
//     Node* new_node = new Node(val);
//     N++;

//     if (empty())
//         tail = new_node;

//     new_node->next = head;
//     head = new_node;
// }

// void pop_front() {
//     if (empty()) {
//         cout << "list is empty\n";
//         return;
//     }

//     Node* old = head;
//     head = head->next;
//     delete old;
//     N--;

//     if (empty())
//         tail = nullptr;
// }

// void push_back(const Element& val) {
//     Node* new_node = new Node(val);
//     N++;

//     if (empty()) {
//         head = tail = new_node;
//         return;
//     }

//     tail->next = new_node;
//     tail = new_node;
// }

// void pop_back() {
//     if (empty()) {
//         cout << "list is empty\n";
//         return;
//     }

//     if (head == tail) {
//         delete tail;
//         head = tail = nullptr;
//         N--;
//         return;
//     }

//     Node* curr = head;
//     while (curr->next != tail)
//         curr = curr->next;
//     delete curr->next;
//     curr->next = nullptr;
//     N--;
//     tail = curr;
// }
// }
// ;
// */

// /* class ListStack {
//    private:
//     Node* top_node;
//     int N;

//    public:
//     ListStack() : top_node(nullptr), N(0) {}

//     int size() { return N; }

//     bool empty() { return size() == 0; }

//     void top() {
//         if (empty()) {
//             cout << "stack is empty\n";
//             return;
//         }

//         cout << top_node->val << '\n';
//     }

//     void push(Element elem) {
//         Node* new_node = new Node(elem);
//         N++;

//         new_node->next = top_node;
//         top_node = new_node;
//     }

//     void pop() {
//         if (empty()) {
//             cout << "Stack is empty\n";
//             return;
//         }

//         Node* old = top_node;
//         top_node = old->next;
//         delete old;
//         N--;
//     }
// };
// */

// class Node {
//    private:
//     int elem;
//     Node* next;
//     friend class ListStack;

//    public:
//     Node(int elem) : elem(elem), next(nullptr) {}
// };

// class ListStack {
//    private:
//     Node* top;
//     int N;

//    public:
//     ListStack() : top(nullptr), N(0) {}

//     int size() const { return N; }

//     bool empty() const { return top == nullptr; }

//     int top() const {
//         if (empty()) {
//             cout << "empty\n";
//             return 0;
//         }
//         return top->elem;
//     }

//     void push(int val) {
//         Node* new_node = new Node(val);
//         N++;

//         new_node->next = top;
//         top = new_node;
//     }

//     int pop() {
//         if (empty()) {
//             cout << "empty\n";
//             return 0;
//         }
//         Node* removed = top;
//         top = removed->next;
//         delete removed;
//         N--;
//     }
// };

// bool solution(string str) {
//     bool empty = true;
//     for (int i = 0; i < str.size(); i++) {
//         if (str[i] == '(')
//             empty = false;
//     }
// }

void solution(string str) {
    ArrayStack s(50);
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(')
            s.push(str[i]);
        else {
            if (s.empty()) {
                cout << "No\n";
                return;
            }
            s.pop();
        }
    }
    if (s.empty())
        cout << "Yes\n";
    else
        cout << "No\n";
}

int main() {
    string str;
    cin >> str;
    solution(str);
}