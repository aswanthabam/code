#include <iostream>
using namespace std;

class InsertionSort {
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
	void sort() {
		int j = -1,tmp,comp,exch,key;
		for(int i = 1;i < size;i++) {
			j = i - 1;
			key = array[i];
			while(j >= 0 && array[j] > key) {
				tmp = array[j];
				array[j] = array[j+1];
				array[j+1] = tmp;
				j--;
				comp++;
				exch++;
			}			
		}
		array[j + 1] = key;
	}
	void display() {
		cout<<"Array is : ";
		for(int i = 0;i < size;i++) cout<<array[i]<<" ";
		cout<<endl;
	}	
};

int main() {
	InsertionSort so;
	so.read();
	so.display();
	cout<<"Sorting using inserion sort algorithm..."<<endl;
	so.sort();
	so.display();
	return 0;
}
