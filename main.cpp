#include "book.h"
#include "binarytree.h"
#include "callback.h"

#include <iostream>

using std::cout;
using std::endl;


class Printer : public Callback{
public:
	void DoSomething(const Object *object) const;
};
void Printer::DoSomething(const Object *object) const{
	cout << object->ToString() << endl;
}


int main() {
	BinaryTree tree;
	Printer printer;

	Book* book = nullptr;

	cout << "Inserting... " << endl;
	book = new Book("A Cats Craddle", "1211121145");
	book->AddAuthor("Johnny Cheng");
	book->AddAuthor("Peter Parker");
	cout << book->ToString() << endl;
	tree.Insert(book);

	cout << "Inserting... " << endl;
	book = new Book("Data Structures", "1211121142");
	book->AddAuthor("Aho");
	book->AddAuthor("Ullman");
	cout << book->ToString() << endl;
	tree.Insert(book);

	cout << "Inserting... " << endl;
	book = new Book("The Art of Computing", "1211121150");
	book->AddAuthor("Donald Knuth");
	cout << book->ToString() << endl;
	tree.Insert(book);

	cout << "Inserting... " << endl;
	book = new Book("Spiderman Chronicles", "1211121112");
	book->AddAuthor("Stan Lee");
	cout << book->ToString() << endl;
	tree.Insert(book);

	cout << endl << endl << endl;
	cout << "InOrder: " << endl;
	tree.InOrderTraversal(printer);
	cout << endl << endl;
	cout << "PostOrder: " << endl;
	tree.PostOrderTraversal(printer);
	cout << endl << endl;
	cout << "PreOrder: " << endl;
	tree.PreOrderTraversal(printer);
	cout << endl << endl;

	return 0;
}
