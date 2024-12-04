#ifdef  ARTICLE_H
#define ARTICLE_H
#include <iostream>
#include <stream>
#include "author.cpp"

class Article{
private:
   std:: string title;
   Author author;
   int publicationYear;
   std::string Journal;
public:
Article()
:title(""), author Author()), publicationYear(0), Journal(""));
Article(std::string articleTitle, Author articleAuthor, int Year, stdz::string joutrnalName)
: title(articleTitle), author(articleAuthor), publicationYear(year), Journal(joutrnalName){};
Article(article &other)
:title(other,title), author(other,author), publicationYear(other, publicationYear), journal(other,journal){};
 std::string getJournal(){
    return journal;
 };
 int getPublicationYear(){
    return publicationYear;
 };
 Author getAuthor(){
    return author;
 };
 std:: string getTitle(){
   return title;
};
void displayInfo(){
    coutr
}

};
