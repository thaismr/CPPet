#include <iostream>
#include <algorithm>  // for std::find
#include <iterator>   // for std::begin, std::end
#include "Cat.h"

using namespace std;

Cat::Cat() {
  name = "Meaw";
  mood = 50;
  hunger = 50;
  clean = 50;
}

Cat::~Cat() {
  cout << "Leaving cat alone..." << endl;
}

void Cat::setName() {
  cout << "Type a name for the cat: > " << flush;
  cin >> name;
}

string Cat::getName() {
  return name;
}

void Cat::doAction(char action) {
  if ( std::find(std::begin(actions), std::end(actions), action) == std::end(actions) )
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
  else if ( std::find(std::begin(games), std::end(games), game) == std::end(games) )
  {
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
    if (mood < 95) {
      mood += 5;
    }
    else {
      mood = 100;
    }
    cout << gameOutcome << endl;
  }
}
