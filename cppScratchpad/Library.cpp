#include "pch.h"
#include "Library.h"
#include <algorithm> //transform
#include <string>

//toLower(string str) is not implemented in c++ for strings

Library::Library()
{
}


Library::~Library()
{
}

void Library::addBook(Book book)
{
	books.push_back(book);
	numberOfBooks++;
}

vector<Book> Library::getBooks(string Author)
{
	vector<Book> _books;
	string toLowerAuthor;
	std::transform(Author.begin(), Author.end(), Author.begin(), ::tolower);
	for (auto book : books) {
		toLowerAuthor = book.Author;

		std::transform(toLowerAuthor.begin(), toLowerAuthor.end(), toLowerAuthor.begin(), ::tolower);
		if (toLowerAuthor == Author)
			_books.push_back(book);

	}
	return _books;
}
