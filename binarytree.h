#ifndef BINTREE_H
#define BINTREE_H

#include "comparable.h"

class BinaryTree{
	struct Node{
		Comparable* data;
		Node* left;
		Node* right;
	};
	Node* _root;
	bool Insert(Comparable*, Node*);
	void BlowItUp(Node*);
public:
	BinaryTree();
	virtual ~BinaryTree();
	bool Insert(Comparable* element);
	Comparable* Remove(Comparable* element);
};


#endif
