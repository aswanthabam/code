#include<iostream>
using namespace std;

class SelectionSort {
private:
	int *array,size;
public:
	void read() {
		cout<<"Enter size : ";
		cin>>size;
		array = new int[size];
		cout<<"Enter elemnts: ";
		for(int i = 0;i < size;i++) cin>>array[i];
	}
	void display() {
		cout<<"Array elements: ";
		for(int i = 0; i< size;i++) cout<<array[i]<<" ";
		cout<<endl;
	}
	void sort() {
		int min_index,tmp,exch,comp;
		for(int i = 0;i <size;i++) {
			min_index = i;
			for(int j = i+1;j <size;j++) {
				comp++;
				if(array[j] < array[min_index]) min_index = j;
			}
			if(min_index != i) {
				tmp = array[i];
				array[i] = array[min_index];
				array[min_index] = tmp;
				exch++;
			}
		}
	}
};

int main() {
	SelectionSort so;
	so.read();
	so.display();
	cout<<"Sorting using Selection Sort..." ;
	so.sort();
	so.display();	
	return 0;
}
