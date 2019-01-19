#pragma once
#include <string>
#include <vector>

using std::string;
using std::vector;

enum Types {
	FICTION,
	NON_FICTION
};
enum Formats
{
	HARDBACK,
	PAPERBACK,
	DIGITAL 
};

enum Genres
{
	FANTASY,
	HORROR,
	SCIFI

};

struct Book
{
	Book() {};
	Book(string _Auther,
		string _Title
		)
	{
		Author = _Auther;
		Title = _Title;

	};
	Book(string _Auther,
		string _Title,
		string _Series,
		int16_t _YearOfRelease,
		bool _haveReadIt,
		Formats _format,
		Genres _genre,
		Types _type
		)
	{
		Author = _Auther;
		Title = _Title;
		Series = _Series;
		YearOfRelease = _YearOfRelease;
		haveReadIt = _haveReadIt;
		format = _format;
		genre = _genre;
		type = _type;

	};

	string Author;
	string Title;
	string Series;
	int16_t YearOfRelease;
	bool haveReadIt;
	Formats format;
	Genres genre;
	Types type;
};

class Library
{
private:
	int16_t numberOfBooks {0};
	vector <Book> books;
public:
	Library();
	~Library();
	void addBook(Book);
	int16_t getNumberBooksInLib() { return numberOfBooks; }

	vector <Book> getBooks(string Author);
};

