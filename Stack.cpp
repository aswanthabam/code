#include <iostream>
using namespace std;

class Stack {
private:
  int size,top = -1,*array;
public:
  Stack(int s) {
    size = s;
    array = new int[s];
  }
  void push(int a) {
    if(top == size -1)
      cout<<"Stack is full "<<endl;
    else{
      top++;
      array[top] = a;
      cout<<"Element pushed: "<<a<<endl;
    }
  }
  void pop() {
    if(top == -1) cout<<"Stack is  empty"<<endl;
    else {
      cout << "Element poped: "<<array[top]<<endl;
      top--;
    }
  }
  
  void Top() {
    if(top == -1) cout << "Stack is empty"<<endl;
    else {
      cout << "Top element is : "<<array[top]<<endl;
    }
  }
  void display() {
    if(top == -1) cout<<"Stack is empty"<<endl;
    else {
      cout<<"Stack is: ";
      for(int i = 0;i <=top;i++) cout<<array[i]<<" ";
      cout<<endl;
    }
  }
};
int main(){
  Stack st(10);
  int op,el;
  do {
    cout << "Choose: \n"
         << "\t1. Push\n"
         << "\t2. Pop\n"
         << "\t3. Top\n"
         << "\t4. Display\n"
         << "\t5. Exit\n"
         <<"Enter: ";
    cin >> op;
    switch(op) {
      case 1:
        cout<<"Enter element: ";
        cin>>el;
        st.push(el);
        break;
      case 2:
        st.pop();
        break;
      case 3:
        st.Top();
        break;
      case 4:
        st.display();
        break;
      case 5:break;
      default: cout<<"Invalid option!"<<endl;
    }
  }while(op != 5);
  return 0;
}