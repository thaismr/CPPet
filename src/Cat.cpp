#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat() {
  name = "Meaw";
  mood = 50;
}

Cat::~Cat() {
  
}

void Cat::setName(string newName) {
  name = newName;
}

string Cat::getName() {
  return name;
}

void Cat::play(char game) {
  if(mood < 100) {
    mood += 5;
    cout << name << "'s mood: " << mood << endl;
  } else {
    cout << name << " is not in the mood for playing anymore." << endl;
  }
}
