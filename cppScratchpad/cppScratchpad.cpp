// cppScratchpad.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <limits>
#include "library.h"

using std::cout;
using std::endl;

int Add2Numbers(int, int);
double Add2Numbers(double, double);
long Add2Numbers(long, long);

int main()
{
	double a = 22.00001;
	double b = 3.2;
	cout << "3 + 22 = " << Add2Numbers(3, 22) << endl;
	cout.precision(8);
	cout << "3.2 + 22.00001 = " << std::fixed << Add2Numbers(a,b) << endl;

	Library *lib = new Library;
	vector<Book> books;
	Book *book = new Book();

	book->Author = "Terry Brooks";
	book->Title = "Streek Freaks";
	book->format = HARDBACK;
	book->genre = FANTASY;
	book->haveReadIt = false;
	book->Series = "Stand-Alone";
	book->type = FICTION;
	book->YearOfRelease = 2018;
	lib->addBook(*book);
	book->Title = "The Sword of Shannara";
	book->YearOfRelease = 1977;
	book->haveReadIt = true;
	book->Series = "Original Shannara Trilogy";
	lib->addBook(*book);
	book->Author = "Stephen King";
	book->Title = "It";
	book->format = PAPERBACK;
	book->genre = HORROR;
	book->haveReadIt = true;
	book->YearOfRelease = 1986;
	book->Series = "Stand-Alone";
	lib->addBook(*book);

	lib->addBook(Book("Terry Brooks","The Elfstones of Shannara"));

	books = lib->getBooks("Terry Brooks");
	cout << "Number of books in library: " << lib->getNumberBooksInLib() << endl;

}

int Add2Numbers(int a, int b) {
	return a + b;
}
double Add2Numbers(double a, double b) {
	return a + b;
}
long Add2Numbers(long a, long b) {
	return a + b;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
