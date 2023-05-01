#include<iostream>
using namespace std;

class Queue {
  int size,rear,front,*array;
public:
  Queue(int s) {
    array = new int[s];
    front = -1;
    rear = -1;
    size = s;
  }
  bool is_empty () {
    if(rear == front) return true;
    else return false;
  }
  bool is_full() {
    if(rear == size - 1) return true;
    else return false;
  }
  void enqueue(int elem) {
    if(is_full()) cout<<"Queue is full!"<<endl;
    else {
      rear++;
      array[rear] = elem;
    }
  }
  void dequeue() {
    if(is_empty()) cout<<"Queue is empty"<<endl;
    else {
      front++;
      cout<<"Element dequeued: "<<array[front]<<endl;
      if(rear == front) {
        rear = -1;
        front = -1;
      }
    }
  }
  
  void display () {
    if(is_empty()) cout<<"Queue is empty"<<endl;
    else {
      cout<<"Array elements: ";
      for(int i = front+1;i <= rear;i++) cout<<array[i]<<" ";
      cout<<endl;
    }
  }
};
int main() {
  Queue qu(10);
  int op,el;
  do {
    cout<<"Choose : \n"
        <<"\t1. Enqueue\n"
        <<"\t2. Dequeue\n"
        <<"\t3. Display\n"
        <<"\t4. Exit\n"
        <<"Enter : ";
    cin>>op;
    switch(op) {
      case 1:
        cout<<"Enter element: ";
        cin>>el;
        qu.enqueue(el);
        break;
      case 2:
        qu.dequeue();
        break;
      case 3:
        qu.display();
        break;
      case 4:break;
      default:cout<<"Invalid option"<<endl;
    }
  }while(op != 4);
}