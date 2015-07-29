#ifndef MATR_H
#define MATR_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <array>
using namespace std;

class matr
{
    public:
        matr(); // default public constructor
				void out();
				 	template <class T, size_t ROW, size_t COL>
using Matrix = std::array<std::array<T, COL>, ROW>;
static const int sz = 10;
				Matrix<int, sz, sz> arr {};

    private:

string line;
string databegin = "Sheet1";
string dataend = "Sheet2";
string rowbegin = "<table:table-row table:style-name";
string rowend = "/table:table-row>";
string valuebegin = "office:value=";
array <string, sz> rows;
};

#endif // MATR_H
