#include<iostream>
using namespace std;

class Search {
private:
	int *array,size;
public:
	void read() {
		cout<<"Enter array size: ";
		cin>>size;
		array = new int[size];
		cout<<"enter arrau: ";
		for(int i = 0;i<size;i++) cin>>array[i];
	}
	void sequential_search(int elem) {
		cout<<"Searching using sequential search.."<<endl;
		int location,found =0;
		for(int i = 0;i < size;i++) 
			if(array[i]==elem){
				found = 1;
				location = i;
				break;
			}
		if(found == 0) cout<<"Element not found"<<endl;
		else cout<<"Element found at index "<<location<<endl;
	}
	void sort() {
		cout<<"Sorting ...."<<endl;
		int tmp;
		for(int i = size -1;i > 0;i--)
			for(int j = 0;j < i;j++)
				if(array[j] > array[j+1]) {
					tmp = array[j];
					array[j] = array[j+1];
					array[j+1] = tmp;
				}
		cout<<"Sorted array: ";
		for(int i = 0;i < size;i++) cout<<array[i]<<" ";
		cout<<endl;
	}
	void binary_search(int elem) {
		sort();
		cout<<"Searchinh using binary search.."<<endl;
		int location,found =0,low = 0,high = size-1,mid;
		while(low <= high) {
			mid = (low+high)/2;
			if(array[mid] == elem) {
				found = 1;
				location = mid;
				break;
			}else if(array[mid] > elem) high = mid -1;
			else if(array[mid] < elem) low = mid + 1;
		}
		if(found == 0) cout<<"Element not found"<<endl;
		else cout<<"Element found at "<<location<<endl;
	}
	
};
int main() {
	Search se;
	int key;
	se.read();
	cout<<"Enter element to search: ";
	cin>>key;
	se.sequential_search(key);
	se.binary_search(key);
	return 0;
}
