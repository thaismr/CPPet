#ifndef CAT_H_
#define CAT_H_

// use string types:
#include <iostream>
using namespace std;

class Cat {
private:
  short mood;
  string name;
public:
  Cat();  // Constructor
  ~Cat(); // Destructor
  void setName(string newName);
  string getName();
  void play(char game);
};

#endif /* CAT_H_ */
