#include <iostream>
#include "Cat.cpp"

using namespace std;

int main() {
  cout << "Type 'x' at any time to exit game." << endl;

  Cat cat;
  cout << cat.getName() << endl;

  char input;

  do {
    cout << endl << "Type your action > " << flush;
    cin >> input;
    cat.doAction(input);
  }
  while (input != 'x');

  return 0;
}
