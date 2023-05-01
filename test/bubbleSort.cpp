#include<iostream>
using namespace std;

class BubbleSort {
private:
	int *array,size;
public:
	void read() {
		cout<<"Enter size: ";
		cin>>size;
		array = new int[size];
		cout<<"Enter elements: ";
		for(int i = 0;i < size;i++) cin>>array[i];
	}
	void display() {
		cout<<"Array is : ";
		for(int i = 0;i < size;i++) cout<<array[i]<<" ";
		cout<<endl;
	}
	void sort() {
		int comp,exch,tmp,swapped = 0;
		for(int i = size - 1; i > 0;i--) {
			swapped = 0;
			for(int j = 0;j < i;j++) {
				comp ++;
				if(array[j] > array[j+1]) {
					tmp = array[j];
					array[j] = array[j+1];
					array[j + 1] = tmp;
					exch++;
					swapped = 1;
				}
			}
			if(!swapped) break;
		}
	}
};
int main() {
	BubbleSort so;
	so.read();
	so.display();
	cout<<"Sorting using bubble sort..."<<endl;
	so.sort();
	so.display();
	return 0;
}
