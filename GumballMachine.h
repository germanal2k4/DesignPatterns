//
// Created by German Albershteyn on 13.05.2024.
//

#ifndef UNTITLED19_GUMBALLMACHINE_H
#define UNTITLED19_GUMBALLMACHINE_H

#include <iostream>
#include <memory>
#include "State.h"

class GumballMachine {
private:
  std::unique_ptr<State> soldoutState;
  State *state;
  std::unique_ptr<State> hasQuarterState;
  std::unique_ptr<State> noQuarterState;
  std::unique_ptr<State> soldState;
  std::unique_ptr<State> winnerState;
  int count = 0;

public:
  explicit GumballMachine(int numberGumballs);
  ~GumballMachine() = default;
  void setState(State *randomState) { state = randomState; }
  State *getHasQuarterState() { return hasQuarterState.get(); }
  State *getNoQuarterState() { return noQuarterState.get(); }
  State *getSoldState() { return soldState.get(); }
  State *getSoldoutState() { return soldoutState.get(); }
  State *getWinnerState() { return winnerState.get(); }
  void releaseBall() {
    std::cout << "A gumball comes rolling out the slot...\n";
    if (count != 0)
      count--;
    std::cout << "Number of balls is " << count << '\n';
  }
  [[nodiscard]] int getCount() const { return count; }
  void insertQuarter();
  void turnCrank();
  void ejectQuarter();
  friend std::ostream& operator<<(std::ostream& os, const GumballMachine& machine);
};


#endif // UNTITLED19_GUMBALLMACHINE_H
