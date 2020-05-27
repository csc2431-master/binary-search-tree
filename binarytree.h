#ifndef BINTREE_H
#define BINTREE_H

#include "comparable.h"
#include "callback.h"

class BinaryTree{
	struct Node{
		Comparable* data;
		Node* left;
		Node* right;
	};
	Node* _root;
	bool Insert(Comparable*, Node*);
	void BlowItUp(Node*);
	void InOrderTraversal(const Node* node, Callback& callback)const;
	void PostOrderTraversal(const Node* node, Callback& callback)const;
	void PreOrderTraversal(const Node* node, Callback& callback)const;
public:
	BinaryTree();
	virtual ~BinaryTree();
	bool Insert(Comparable* element);
	Comparable* Remove(Comparable* element);
	void InOrderTraversal(Callback& callback)const;
	void PostOrderTraversal(Callback& callback)const;
	void PreOrderTraversal(Callback& callback)const;
};


#endif
