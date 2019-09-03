#ifndef CAT_H_
#define CAT_H_

// use string type:
#include <iostream>
using namespace std;

class Cat {
private:
  string name, gameOutcome;
  short mood, hunger, clean;
  double energy;
  int treat1, treat2;
  char games[3] = {'b','s','h'};
  char actions[5] = {'p','f','c','h','b'};
public:
  Cat();  // Constructor
  Cat(string name);
  Cat(string name, short mood, short hunger, short clean, double energy);
  ~Cat(); // Destructor
  void setName();
  string getName() const;   // method does not change any variables
  string getMood() const;
  void eat(int &food);
  void play(char game);
  void doAction(char action);
};

#endif /* CAT_H_ */
