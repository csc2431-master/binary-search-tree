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
	bool Insert(const Comparable*, Node*);
	void BlowItUp(Node*);
public:
	BinaryTree();
	virtual ~BinaryTree();
	bool Insert(const Comparable*);
};


#endif
