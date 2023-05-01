#include <iostream>
using namespace std;
class Node {
  public:
  Node(int val) {
    value = val;
    next = NULL;
  }
  Node(int val,Node* nex){
    value = val;
    next = nex;
  }
  Node *next;
  int value;
};
class LinkedList {
  Node *head = NULL;
  public:
  void insertBegining(int val) {
    if(head == NULL) head = new Node(val);
    else head = new Node(val,head);
  }
  void deleteBegining() {
    if(head == NULL) cout<<"Linked list is empty"<<endl;
    else head = head->next;
  }
  void print() {
    if(head == NULL) cout<<"Linked List is empty"<<endl;
    else {
      cout << "Linked List is : ";
      Node *tmp = head;
      do {
        cout<<tmp->value<<" -> ";
        tmp = tmp->next;
      }while(tmp != NULL);
      cout << "END" <<endl;
    }
  }
};

int main () {
  LinkedList list;
  int op;
  do {
    cout << "Choose option: " << endl;
    cout << "1. Insert at beginning \n" 
         << "2. Delete from beginning \n"
         << "3. Print List \n"
         << "4. Exit"<<endl
         << "Enter: ";
    cin >> op;
    switch(op) {
      case 1:
        int val;
        cout << "Enter value: ";
        cin >> val;
        list.insertBegining(val);
        break;
      case 2:
        list.deleteBegining();
        break;
      case 3:
        list.print();
        break;
      case 4:break;
      default:cout<<"Invalid option"<<endl;
    }
  } while(op != 4);
  return 0;
}