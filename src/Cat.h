#ifndef CAT_H_
#define CAT_H_

// use string type:
#include <iostream>
using namespace std;

class Cat {
private:
  string name, gameOutcome;
  short mood, hunger, clean;
  char games[3] = {'b','s','h'};
  char actions[5] = {'p','f','c','h','b'};
public:
  Cat();  // Constructor
  ~Cat(); // Destructor
  void setName();
  string getName();
  void play(char game);
  void doAction(char action);
};

#endif /* CAT_H_ */
