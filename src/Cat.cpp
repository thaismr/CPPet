//#include <iostream>
#include <sstream>    // for stringstream
#include <algorithm>  // for std::find
#include <iterator>   // for std::begin, std::end
#include "Cat.h"

//using namespace std; // already included in header file!

Cat::Cat() {
  name = "Meaw";
  mood = 50;
  hunger = 50;
  clean = 50;
  energy = 100.0;
  treat1 = 2;
  treat2 = 2;
}

Cat::Cat(string name) {
  this->name = name;
  mood = 50;
  hunger = 50;
  clean = 50;
  energy = 100.0;
  treat1 = 2;
  treat2 = 2;
}

Cat::Cat(string name, short mood, short hunger, short clean, double energy) {
  this->name = name;
  this->mood = mood;
  this->hunger = hunger;
  this->clean = clean;
  this->energy = energy;
  treat1 = 2;
  treat2 = 2;
}

Cat::~Cat() {
  cout << "Leaving cat alone..." << endl;
}

void Cat::setName() {
  cout << "Type a name for the cat > " << flush;
  cin >> name;
}

string Cat::getName() const {
  return name;
}

string Cat::getMood() const {
  stringstream ss;
  ss << name;
  ss << "'s happiness: ";
  ss << mood;
  return ss.str();
}

void Cat::doAction(char action) {
  if ( find(begin(actions), end(actions), action) == end(actions) )
  {
    cout << "No valid action selected." << endl;
  }
  else
  {
    switch (action) {
      case 'p':
        char choice;
        cout << "(b) Play with a ball." << endl;
        cout << "(s) Play with a string." << endl;
        cout << "(h) Play hide-and-seek." << endl;
        cout << "Choose a game to play: > " << flush;
        cin >> choice;
        play(choice);
      break;
      case 'f':
        eat(treat1);
      break;
      case 'c':

      break;
      case 'h':

      break;
      case 'b':

      break;
    }
  }
}

void Cat::play(char game) {
  if (mood >= 100)
  {
    cout << name << " is not in the mood for playing anymore." << endl;
  }
  else if (energy < 15.0)
  {
    cout << name << " is too tired to play." << endl;
  }
  else if ( find(begin(games), end(games), game) == end(games) )
  {
    // game not found in games' array
    cout << "No valid game selected." << endl;
  }
  else
  {
    switch (game) {
      case 'b':
        gameOutcome = "You throw a ball on the floor, and " + name + " chases it around.";
      break;
      case 's':
        gameOutcome = "You move a string around for " + name + " to chase.";
      break;
      case 'h':
        gameOutcome = "You and " + name + " play hide-and-seek.";
      break;
    }
    // adjust cat's mood:
    if (mood < 95) {
      mood += 5;
    }
    else {
      mood = 100;
    }
    // cat looses energy:
    energy -= energy/(double)5;     // make sure division is precise
    if (energy < 0) {
      energy = 0;
    }
    // output outcome:
    cout << gameOutcome << endl;
  }
}

void Cat::eat(int &food) {
  // consume whatever type of food was given:
  food--;
}
