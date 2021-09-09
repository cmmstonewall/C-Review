#pragma once
#include <string>

using namespace std;

class Book
{
private:
  string author;
  string title;
public:
  Book(string t, string a);
  string getTitle();
  string getAuthor();
  void setTitle(string title);
  void setAuthor(string author);
};