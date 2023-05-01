#include<iostream>
using namespace std;

class Node {
public:
	Node *left=NULL,*right=NULL;
	int data;
	Node(int data) {
		this->data = data;
	}
};
class BinaryTree {
public:
	Node *root = NULL;
	void insert(int val) {
		root = insert(root,val);
	}
	Node* insert(Node *node,int data) {
		if(node == NULL) node = new Node(data);
		else if(node->data < data) node->right = insert(node->right,data);
		else node->left = insert(node->left,data);
		return node;
	}
	void inorderTraversal() {
		cout<<"Inorder Traversal: ";
		inorderTraversal(root);
		cout<<endl;
	}
	void inorderTraversal(Node *node) {
		if(node == NULL) return;
		inorderTraversal(node->left);
		cout<<node->data<<" ";
		inorderTraversal(node->right);
	}
	void preorderTraversal() {
		cout<<"Preorder Traversal: ";
		preorderTraversal(root);
		cout<<endl;
	}
	void preorderTraversal(Node *node) {
		if(node == NULL) return;
		cout<<node->data<<" ";
		preorderTraversal(node->left);
		preorderTraversal(node->right);
	}
	void postorderTraversal() {
		cout<<"Preorder Traversal: ";
		postorderTraversal(root);
		cout<<endl;
	}
	void postorderTraversal(Node *node) {
		if(node == NULL) return;
		postorderTraversal(node->left);
		postorderTraversal(node->right);
		cout<<node->data<<" ";
	}
};


int main() {
	BinaryTree tree;
	int j = 0;
	while(true){
		cout<<"Enter element to add in Tree(Use -1 to exit): ";
		cin>>j;
		if(j == -1) break;
		tree.insert(j);
	};
	tree.inorderTraversal();
	tree.preorderTraversal();
	tree.postorderTraversal();
	return 0;
}
