#include "comparable.h"
#include "binarytree.h"




BinaryTree::BinaryTree(){
	_root = nullptr;
}
BinaryTree::~BinaryTree(){
	if (_root != nullptr){
		BlowItUp(_root);
	}
}
void BinaryTree::BlowItUp(Node* node){
	if (node->left)
		BlowItUp(node->left);
	if (node->right)
		BlowItUp(node->right);
	delete node->data;
	delete node;
}
bool BinaryTree::Insert(Comparable* element){
	if (_root == nullptr){
		Node* neo = new Node;
		neo->left = neo->right = nullptr;
		neo->data = element;
		_root = neo;
		return true;
	}else{
		return Insert(element, _root);
	}
}
bool BinaryTree::Insert(Comparable* element, Node* node){
	if (node == nullptr){
		return false;
	}
	if (element->CompareTo(*(node->data)) < 0){
		if (node->left == nullptr){
			Node* neo = new Node;
			neo->left = neo->right = nullptr;
			neo->data = element;
			node->left = neo;
			return true;

		}else{
			return Insert(element, node->left);
		}
	}else if (element->CompareTo(*(node->data)) > 0){
		if (node->right == nullptr){
			Node* neo = new Node;
			neo->left = neo->right = nullptr;
			neo->data = element;
			node->right = neo;
			return true;

		}else{
			return Insert(element, node->right);
		}
	}else{
		return false;
	}
}

Comparable *BinaryTree::Remove(Comparable *element) {
	// Let's do it together from ZyBooks code
	return nullptr;
}

void BinaryTree::InOrderTraversal(const BinaryTree::Node *node, Callback &callback) const {
	if (node->left)
		InOrderTraversal(node->left, callback);
	callback.DoSomething(node->data);
	if (node->right)
		InOrderTraversal(node->right, callback);
}

void BinaryTree::PostOrderTraversal(const BinaryTree::Node *node, Callback &callback) const {
	if (node->left)
		PostOrderTraversal(node->left, callback);
	if (node->right)
		PostOrderTraversal(node->right, callback);
	callback.DoSomething(node->data);
}

void BinaryTree::PreOrderTraversal(const BinaryTree::Node *node, Callback &callback) const {
	callback.DoSomething(node->data);
	if (node->left)
		PreOrderTraversal(node->left, callback);
	if (node->right)
		PreOrderTraversal(node->right, callback);
}

void BinaryTree::InOrderTraversal(Callback &callback) const {
	if (_root)
		InOrderTraversal(_root, callback);
}

void BinaryTree::PostOrderTraversal(Callback &callback) const {
	if (_root)
		PostOrderTraversal(_root, callback);
}

void BinaryTree::PreOrderTraversal(Callback &callback) const {
	if (_root)
		PreOrderTraversal(_root, callback);
}
