#include "book.h"

#include <iostream>

using std::cout;
using std::endl;

int main() {
	Book book("A Cats Craddle", "1211121145");
	book.AddAuthor("Johnny Cheng");
	book.AddAuthor("Peter Parker");
	cout << book.ToString() << endl;
	return 0;
}
