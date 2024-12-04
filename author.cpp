#ifdef  UNTITLED_AUTHOR_H
#define UNTITLED_AUTHOR_H
#include <iostream>
#include <string>

class Author{
private:
 std::string name;
 std::string surname;
 public:
   Author(std::string name, std::string surname)
   :name (name), surname (surname){};

    std::string getSurname(){
        return surname ;
    };
    std::string getName(){
        return name;
    };
    std::string toString(){
        return name + " " + surname;
    };
    
    }
};